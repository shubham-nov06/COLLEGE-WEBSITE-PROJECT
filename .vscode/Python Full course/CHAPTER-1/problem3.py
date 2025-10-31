import os

# Ask user for directory path
directory_path = '/Temp'
    # List all files and folders in the directory
contents = os.listdir(directory_path)


    # Print each item
for item in contents:
        print(item)

