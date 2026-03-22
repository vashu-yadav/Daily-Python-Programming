filename = "sample.txt"

try:
    with open(filename, "r") as file:
        text = file.read()
        words = text.split()
        print("Total words:", len(words))
except FileNotFoundError:
    print("File not found!")