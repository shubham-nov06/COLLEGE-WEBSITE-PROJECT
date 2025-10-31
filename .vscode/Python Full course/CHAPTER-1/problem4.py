# With our comments 
import os

# Ask the user for directory path with name 
directory_path = '/Temp'
# It will list all files and folders in the directory
contents = os.listdir(directory_path)
# It will print each item
for item in contents:
 print(item)
