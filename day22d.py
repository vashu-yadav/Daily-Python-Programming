num = input("Enter a number: ")

is_binary = True

for ch in num:
    if ch not in '01':
        is_binary = False
        break

if is_binary:
    print("Binary number")
else:
    print("Not a binary number")
