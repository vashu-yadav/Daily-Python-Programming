# Program using get()

student = {
    "name": "Vashu",
    "age": 19,
    "branch": "CSE"
}

# Using get()
print("Name:", student.get("name"))
print("Marks:", student.get("marks", "Not Available"))
