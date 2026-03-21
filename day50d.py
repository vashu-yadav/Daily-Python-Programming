# Create a file and count words in it

filename = "sample.txt"

# Writing into file
with open(filename, "w") as f:
    f.write("Python is powerful and easy to learn")

# Reading and counting words
with open(filename, "r") as f:
    content = f.read()
    words = content.split()
    print("Total words:", len(words))