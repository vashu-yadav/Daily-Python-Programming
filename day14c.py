sum = 0

for i in range(5):
    n = int(input("Enter a number: "))

    if n < 0:
        continue

    sum += n

print("Sum of positive numbers =", sum)
