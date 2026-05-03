import pandas as pd

# Create a Pandas Series from a list
data_list = [10, 20, 30, 40, 50]
series = pd.Series(data_list)
print("Pandas Series:")
print(series)

# Create a Pandas DataFrame from a dictionary
data_dict = {
    'Name': ['Alice', 'Bob', 'Charlie', 'David'],
    'Age': [25, 30, 35, 40],
    'City': ['New York', 'Los Angeles', 'Chicago', 'Houston']
}
df = pd.DataFrame(data_dict)
print("\nPandas DataFrame:")
print(df)
