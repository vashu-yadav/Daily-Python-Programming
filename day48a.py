# word_count.py

with open("data.txt", "r") as file:
    content = file.read()
    words = content.split()
    print("Total words:", len(words))