marks = []

for i in range(5):
    m = int(input(f"Enter marks of subject {i+1}: "))
    marks.append(m)

total = sum(marks)
percentage = total / 5

if percentage >= 90:
    grade = "A"
elif percentage >= 75:
    grade = "B"
elif percentage >= 50:
    grade = "C"
else:
    grade = "Fail"

print("Total:", total)
print("Percentage:", percentage)
print("Grade:", grade)