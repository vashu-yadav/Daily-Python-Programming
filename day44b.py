numbers = list(range(1, 11))
evens = [x for x in numbers if x % 2 == 0]
squares = [x**2 for x in evens]
print("Evens:", evens)      # [2, 4, 6, 8, 10]
print("Squares:", squares)  # [4, 16, 36, 64, 100]
