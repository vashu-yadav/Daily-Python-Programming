#UTOMORPHIC NUMBER -3
n = int(input("Enter a number: "))
square = n * n

digits = len(str(n))

if square % (10 ** digits) ==n:
    print(n, "is an Automorphic number")
else:
    print(n, "is not an Automorphic number")
