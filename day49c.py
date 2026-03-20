# read_file.py

file = open("sample.txt", "r")  # open file in read mode
content = file.read()
file.close()

print("File Content:\n", content)