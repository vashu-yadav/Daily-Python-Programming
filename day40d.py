# Count lines in a file

f = open("sample.txt", "r")

count = 0

for line in f:
    count += 1

print("Number of lines:", count)

f.close()