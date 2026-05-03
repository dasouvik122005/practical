import pandas as pd
import os

# Create a dummy CSV file to read from
data = {'col1': [1, 2], 'col2': [3, 4]}
df_to_write = pd.DataFrame(data=data)
csv_path = 'data.csv'
df_to_write.to_csv(csv_path, index=False)

# Read data from the CSV file
try:
    df = pd.read_csv(csv_path)
    print("Data read from CSV file:")
    print(df)
except FileNotFoundError:
    print(f"Error: The file '{csv_path}' was not found.")

# Clean up the dummy file
if os.path.exists(csv_path):
    os.remove(csv_path)
