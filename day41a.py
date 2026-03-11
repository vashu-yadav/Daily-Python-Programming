# Search a word in file

f = open("sample.txt", "r")

data = f.read()

word = input("Enter word to search: ")

if word in data:
    print("Word found in file")
else:
    print("Word not found")

f.close()