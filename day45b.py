# Sum any number of args
def sum_all(*numbers):
    return sum(numbers)
print(sum_all(1, 2, 3, 4))  # 10

# Recursive factorial
def factorial(n):
    if n == 0:
        return 1
    return n * factorial(n - 1)
print(factorial(5))  # 120

# Flatten nested list
def flatten(nested_list):
    flat = []
    for item in nested_list:
        if isinstance(item, list):
            flat.extend(flatten(item))
        else:
            flat.append(item)
    return flat
print(flatten([1, [2, [3]]]))  # [1, 2, 3]
