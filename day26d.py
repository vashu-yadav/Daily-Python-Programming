# Dictionary of students and their subjects (stored as sets)
students = {
    "Vashu": {"Maths", "Physics", "C Programming"},
    "Rahul": {"Maths", "English", "C Programming"},
    "Aman": {"Physics", "Chemistry", "Maths"}
}

# Find common subjects between Vashu and Rahul
common = students["Vashu"] & students["Rahul"]

print("Common subjects between Vashu and Rahul:", common)
