import numpy as np

# Create a 1D NumPy array
arr = np.arange(1, 13)
print("Original array:", arr)

# Reshape the array to a 3x4 matrix
reshaped_arr = arr.reshape(3, 4)
print("\nReshaped array (3x4):")
print(reshaped_arr)

# Slicing
# Get the first row
print("\nFirst row:", reshaped_arr[0])

# Get the second column
print("\nSecond column:", reshaped_arr[:, 1])

# Get a sub-array (first 2 rows, columns 1 and 2)
sub_arr = reshaped_arr[:2, 1:3]
print("\nSub-array (first 2 rows, columns 1 and 2):")
print(sub_arr)
