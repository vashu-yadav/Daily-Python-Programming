# Class and Object example

class Student:
    def __init__(self, name, marks):
        self.name = name
        self.marks = marks

    def display(self):
        print("Name:", self.name)
        print("Marks:", self.marks)

    def grade(self):
        if self.marks >= 90:
            print("Grade: A")
        elif self.marks >= 75:
            print("Grade: B")
        else:
            print("Grade: C")

# Creating object
s1 = Student("Vashu", 88)
s1.display()
s1.grade()