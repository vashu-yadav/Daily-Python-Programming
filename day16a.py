age = 65
is_student = True
if age < 18 or age >= 65:
    price = "Senior/Child: $5"
elif age <= 25 and is_student:
    price = "Student: $7"
else:
    price = "Adult: $10"
print(price)
