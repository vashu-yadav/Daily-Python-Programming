total = 0
while True:
    x = int(input("enter the number: "))

    if x == 5:
        continue

    if x == 0:
        break

    total = total + x

print(total)
