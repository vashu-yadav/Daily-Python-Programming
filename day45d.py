# Append adds one item
fruits = ['apple', 'banana']
fruits.append('orange')
print(fruits)  # ['apple', 'banana', 'orange']

# Extend adds multiple items
numbers = [1, 2, 3]
numbers.extend([4, 5])
print(numbers)  # [1, 2, 3, 4, 5]

# Insert at specific position
colors = ['red', 'blue']
colors.insert(1, 'green')
print(colors)  # ['red', 'green', 'blue']

# Remove first occurrence
items = [10, 20, 10, 30]
items.remove(10)
print(items)  # [20, 10, 30]
