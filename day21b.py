num = int(input("Enter a number: "))
rev = 0

while num > 0:
    rev = rev * 10 + num % 10
    num //= 10

if rev % 2 == 0:
    print("Reversed number is even:", rev)
else:
    print("Reversed number is odd:", rev)
