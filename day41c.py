# Count vowels in a file

f = open("sample.txt", "r")

data = f.read()

count = 0

for ch in data:
    if ch.lower() in "aeiou":
        count += 1

print("Number of vowels:", count)

f.close()