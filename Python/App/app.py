from flask import Flask, request, render_template
from couchbase.auth import PasswordAuthenticator
from couchbase.cluster import Cluster
from couchbase.options import ClusterOptions
import re
import datetime
import dateparser
from transformers import BertForSequenceClassification, BertTokenizer
import torch

app = Flask(__name__)

# Connect to Couchbase
cluster = Cluster('couchbase://localhost',
                  ClusterOptions(PasswordAuthenticator('tanaybhomia', 'cacdam123')))
bucket = cluster.bucket('expenses_bucket')
expenses_collection = bucket.default_collection()

# Load pre-trained text classification model and tokenizer
classification_model = BertForSequenceClassification.from_pretrained('bert-base-uncased')
tokenizer = BertTokenizer.from_pretrained('bert-base-uncased')

# Chatbot interface
@app.route("/", methods=["GET", "POST"])
def chatbot():
    if request.method == "POST":
        user_input = request.form["expense"]

        # Extract parameters using regular expressions
        expense_match = re.search(r"([a-zA-Z\s]+) for (\d+) on (.+)$", user_input)
        if expense_match:
            expense_name = expense_match.group(1).strip()
            expense_cost = int(expense_match.group(2))
            expense_date_str = expense_match.group(3)

            expense_date = dateparser.parse(expense_date_str)

            if expense_date is None:
                return "Unable to parse date. Please enter a valid date."

        else:
            return "Invalid input format. Please enter: 'Item for Cost on Date'"

        # Use the pre-trained classification model to predict the category
        encoded_input = tokenizer(expense_name, return_tensors='pt', padding=True, truncation=True)
        with torch.no_grad():
            logits = classification_model(**encoded_input).logits
            predicted_class = torch.argmax(logits, dim=1).item()
        
        # Assuming you have a list of expense categories, you can map the predicted class index to a category
        expense_categories = ["Groceries", "Electronics", "Dining", "Travel", "Miscellaneous"]
        expense_category = expense_categories[predicted_class]

        # Store the extracted data in Couchbase
        expense_data = {
            "name": expense_name,
            "cost": expense_cost,
            "date": expense_date.date().isoformat(),
            "category": expense_category
        }
        expenses_collection.insert(expense_name, expense_data)

    return render_template("index.html")

if __name__ == "__main__":
    app.run(debug=True)
