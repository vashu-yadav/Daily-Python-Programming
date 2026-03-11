# Copy data from one file to another

f1 = open("sample.txt", "r")
data = f1.read()

f2 = open("copy.txt", "w")
f2.write(data)

f1.close()
f2.close()

print("File copied successfully")