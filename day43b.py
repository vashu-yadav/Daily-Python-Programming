# lambda_sort.py
students = [('Vashu', 85), ('Alice', 92), ('Bob', 78)]
sorted_students = sorted(students, key=lambda x: x[1], reverse=True)
print("Sorted by grade:", sorted_students)
