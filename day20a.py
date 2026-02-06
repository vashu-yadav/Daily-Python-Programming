num = int(input("Enter a number: "))

square =num*num
temp =num
c = 1

while temp > 0:
    c *= 10
    temp //= 10

if (square % c)==num:
    print(num, "is an Automorphic number")
else:
    print(num, "is not an Automorphic number")
