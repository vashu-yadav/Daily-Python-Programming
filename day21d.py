s = input("Enter a string: ")

vowels = consonants = digits = 0

for ch in s:
    if ch in 'aeiouAEIOU':
        vowels += 1
    elif ch.isdigit():
        digits += 1
    elif ch.isalpha():
        consonants += 1

print("Vowels:", vowels)
print("Consonants:", consonants)
print("Digits:", digits)
