def is_even(num):
    if num % 2 == 0:
        return f"{num} is even."
    else:
        return f"{num} is odd."

print(is_even(7))   # Output: 7 is odd.
print(is_even(8))   # Output: 8 is even.
