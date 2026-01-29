name = input("Enter student name: ")
sapid = input("Enter the sapid: ")
sem=input("enter the semester: ")
course=input("enter the course: ")

#marks of five subjects

Python=int(input("enter the marks:"))
Aem=int(input("enter the marks:"))
Aiml=int(input("enter the marks:"))
Dsa=int(input("enter the marks:"))
DE=int(input("enter the marks:"))

total = Python + Aem + Aiml + Dsa + DE
percentage = total / 5
cgpa= percentage / 10


if cgpa <= 3.4:
    grade = "F"
elif cgpa <= 5.0:
    grade = "C+"
elif cgpa <= 6.0:
    grade = "B"
elif cgpa <= 7.0:
    grade = "B+"
elif cgpa <= 8.0:
    grade = "A"
elif cgpa <= 9.0:
    grade = "A+"
else:
    grade = "O"
    
print("----- GRADE SHEET -----")
print("Name:", name)
print("Sapid:", sapid)
print("Sem:", sem, " Course:", course)

print("Subject  Marks")
print("Python:", Python)
print("Aem:", Aem)
print("Aiml:", Aiml)
print("Dsa:", Dsa)
print("DE:", DE)

print("\nPercentage:", percentage,"%")
print("CGPA:", cgpa)
print("Grade:", grade)
