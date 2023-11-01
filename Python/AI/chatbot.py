import spacy
import dateparser
import re
import pandas as pd
from datetime import datetime, timedelta

# Load the CSV file that contains item-category mapping
df = pd.read_csv('item_categories.csv')  # Adjust the filename as needed

# Create a dictionary from the CSV data
item_category_dict = dict(zip(df['Item Name'], df['Category']))

# Load the English NLP model from spaCy
nlp = spacy.load("en_core_web_sm")

# Function to categorize an item with a user-friendly message
def categorize_item(item):
    if item in item_category_dict:
        category = item_category_dict[item]
    else:
        category = "Item not found in the database"
    
    return category

# Function to extract purchase information
def extract_purchase_info(text):
    # Initialize purchase date as None
    purchase_date = None
    
    # Check for date expressions like "yesterday," "tomorrow," "day after tomorrow," and "day after yesterday"
    if "yesterday" in text:
        purchase_date = dateparser.parse("yesterday", settings={"PREFER_DATES_FROM": "future"})
    elif "tomorrow" in text:
        purchase_date = dateparser.parse("tomorrow", settings={"PREFER_DATES_FROM": "future"})
    elif "day after tomorrow" in text:
        purchase_date = datetime.now() + timedelta(days=2)
    elif "day after yesterday" in text:
        purchase_date = dateparser.parse("2 days ago", settings={"PREFER_DATES_FROM": "future"})
    
    # Extract the item text without post-processing
    item = extract_item(text)
    
    # Extract the item price
    item_price = extract_item_price(text)
    
    # Categorize the item
    category = categorize_item(item)
    
    return {
        "Purchase Date": purchase_date,
        "Expense Item": item,
        "Category": category,
        "Item Price": item_price
    }

# Function to extract the item text without post-processing
def extract_item(text):
    # Find the position of "I bought a" and "for" to extract the item
    start_index = text.find("I bought a") + len("I bought a")
    end_index = text.find("for")
    item = text[start_index:end_index].strip()
    
    return item

# Function to extract item price using regex
def extract_item_price(text):
    # Define a regular expression pattern to match item prices
    price_pattern = r"(\d+)\s*rs"
    
    # Search for the pattern in the text
    match = re.search(price_pattern, text)
    
    if match:
        # Extract the numeric part and convert it to an integer
        item_price = int(match.group(1))
    else:
        item_price = None
    
    return item_price

# Function to format the purchase date as a string without milliseconds
def format_purchase_date(purchase_date):
    return purchase_date.strftime('%Y-%m-%d %H:%M:%S')

# Function to interact with the user and gather missing information
def interact_with_user():
    user_input = input("Please enter your purchase details: ")
    
    # Extract and categorize purchase information
    purchase_info = extract_purchase_info(user_input)
    
    # Check if the purchase date is missing
    if purchase_info["Purchase Date"] is None:
        print("Please provide the purchase date separately.")
        date_input = input("Enter the purchase date (e.g., yesterday, 29-10-2023): ")
        purchase_date = dateparser.parse(date_input, settings={"PREFER_DATES_FROM": "future"})
        if purchase_date:
            purchase_info["Purchase Date"] = purchase_date
        else:
            print("Invalid date format. Please enter a valid date.")
    
    # Check if the purchase cost (item price) is missing
    if purchase_info["Item Price"] is None:
        print("Please provide the purchase cost (item price) separately.")
        item_price_input = input("Enter the purchase cost (item price): ")
        try:
            # Remove "rs" if it's present and then convert to an integer
            item_price_input = item_price_input.replace("rs", "").strip()
            purchase_info["Item Price"] = int(item_price_input)
        except ValueError:
            print("Invalid item price. Please enter a valid numeric value.")
    
    # Display the extracted information
    print("Extracted Information:")
    print("Purchase Date:", format_purchase_date(purchase_info["Purchase Date"]))
    print("Expense Item:", purchase_info["Expense Item"])
    print("Category:", purchase_info["Category"])
    print("Item Price:", purchase_info["Item Price"])

# Start the interactive session
interact_with_user()
