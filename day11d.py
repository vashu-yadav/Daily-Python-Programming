a = float(input("Enter a: "))
b = float(input("Enter b: "))
c = float(input("Enter c: "))

d = b*b - 4*a*c

if d>0:
    print("roots are real")
    root1 = (-b + d**0.5) / (2*a)
    root2 = (-b - d**0.5) / (2*a)
else:
    print("roots are imaginary")
    root1 = (-b + (-d)**0.5 * 1j) / (2*a)
    root2 = (-b - (-d)**0.5 * 1j) / (2*a)

print("Root 1:", root1)
print("Root 2:", root2)
