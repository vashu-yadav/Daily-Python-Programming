num = int(input("Enter a number: "))

square = num * num

n=str(square)
m=str(num)
if (n//m)==m:
    print(num, "is an Automorphic number")
else:
    print(num, "is not an Automorphic number")
