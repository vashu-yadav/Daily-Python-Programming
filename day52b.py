# Writing to file
file = open("demo.txt", "w")
file.write("Hello Vashu, this is your file handling code!")
file.close()

# Reading from file
file = open("demo.txt", "r")
content = file.read()
print(content)
file.close()