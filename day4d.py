import  math
a = float(input("Enter side a: "))
b = float(input("Enter side b: "))
c = float(input("Enter side c: "))


s = (a + b + c) / 2


area = math.sqrt(s * (s - a) * (s - b) * (s - c))

print(f"Area of triangle: {area:.2f} square units")