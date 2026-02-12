# Using add(), remove(), update(), discard()

fruits = {"apple", "banana", "mango"}

print("Original Set:", fruits)

# Add single element
fruits.add("orange")

# Add multiple elements
fruits.update(["grapes", "kiwi"])

# Remove element
fruits.remove("banana")

# Discard element (no error if not present)
fruits.discard("pineapple")

print("Updated Set:", fruits)
