marks = {
    "Vashu": 85,
    "Rahul": 67,
    "Aman": 92,
    "Riya": 74
}

# Store students above 75 in a set
top_students = {name for name, score in marks.items() if score > 75}

print("Students scoring above 75:", top_students)
