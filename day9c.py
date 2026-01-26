text = input("Enter a word: ")
count = 0

for ch in text:
    if ch in "aeiouAEIOU":
        count += 1

print("Number of vowels:", count)
