n = int(input("Enter n: "))
sum_loop = 0

for i in range(1, n + 1):
    sum_loop += i

print(f"Sum of first {n} natural numbers: {sum_loop}")