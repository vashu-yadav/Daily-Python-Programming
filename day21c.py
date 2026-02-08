num = int(input("Enter a number: "))
s = str(num)

if len(s) == 1:
    print("Single digit number:", num)
else:
    swapped = s[-1] + s[1:-1] + s[0]
    print("After swapping:", int(swapped))
