
emp1 = set()
emp2 = set()
emp3 = set()

print("Enter 3 employee codes for List 1:")
for i in range(3):
    emp1.add(int(input()))

print("Enter 3 employee codes for List 2:")
for i in range(3):
    emp2.add(int(input()))

print("Enter 3 employee codes for List 3:")
for i in range(3):
    emp3.add(int(input()))

common = emp1 & emp2 & emp3

print("Common Employee Codes:", common)

x=emp1|emp2
y=emp2|emp3

z= x|y
a=common-z
print(a)