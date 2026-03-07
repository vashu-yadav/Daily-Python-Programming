def sum_digits(n):
    s = 0
    
    while n > 0:
        digit = n % 10
        s += digit
        n = n // 10
    
    print("Sum of digits:", s)


sum_digits(1234)