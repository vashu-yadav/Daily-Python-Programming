# count_words.py

file = open("sample.txt", "r")
content = file.read()
file.close()

words = content.split()
print("Number of words:", len(words))