import nltk
import spacy
from spacy.matcher import Matcher
from nltk.corpus import stopwords
import sqlite3
from datetime import datetime, timedelta

# Initialize NLTK and spaCy
nltk.download('punkt')
nltk.download('stopwords')
nlp = spacy.load('en_core_web_sm')

# Connect to the database (SQLite in this case)
conn = sqlite3.connect('expenses.db')
cursor = conn.cursor()

# Create a table to store expenses if it doesn't exist
cursor.execute('''
    CREATE TABLE IF NOT EXISTS expenses (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        date TEXT,
        amount REAL,
        name TEXT
    )
''')
conn.commit()

# Function to process user input and extract relevant information using spaCy
def extract_expense_info(text):
    doc = nlp(text)

    # Find entities using spaCy's named entity recognition (NER)
    amount = None
    name = None
    for ent in doc.ents:
        if ent.label_ == 'MONEY':
            amount = float(ent.text.replace('rs', '').replace(',', '').strip())
        elif ent.label_ == 'PRODUCT':
            name = ent.text

    # Find the date in the input (assuming the word "yesterday" indicates the date)
    date = datetime.now().strftime('%Y-%m-%d')  # Default to today's date
    for token in doc:
        if token.lower_ == 'yesterday':
            date = (datetime.now() - timedelta(days=1)).strftime('%Y-%m-%d')

    return date, amount, name

# Function to add an expense to the database
def add_expense(date, amount, name):
    cursor.execute('INSERT INTO expenses (date, amount, name) VALUES (?, ?, ?)', (date, amount, name))
    conn.commit()

# Main function to handle user interactions
def main():
    print("Welcome to the Expense Tracker Bot!")
    while True:
        user_input = input("Enter your expense statement (e.g., 'I bought a TV for 20000rs yesterday'): ")
        
        # Check if the user wants to exit
        if user_input.lower() in ['exit', 'quit', 'bye']:
            print("Goodbye!")
            break

        # Extract information from user input
        date, amount, name = extract_expense_info(user_input)

        # Check if all information is available
        if date and amount and name:
            # Add the expense to the database
            add_expense(date, amount, name)
            print("Expense added successfully!")
        else:
            print("Unable to process the input. Please provide a valid expense statement.")

if __name__ == "__main__":
    main()
    conn.close()
