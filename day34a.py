def product_digits(n):
    if n == 0:
        return 1
    return (n % 10) * product_digits(n // 10)

# Example
print(product_digits(1234))