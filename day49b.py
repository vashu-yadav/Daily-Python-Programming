# append_file.py

file = open("sample.txt", "a")  # open file in append mode
file.write("\nThis line is added later.")
file.close()

print("Data appended successfully.")