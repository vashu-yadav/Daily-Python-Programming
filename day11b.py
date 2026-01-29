day =int(input("Enter day: "))
month =int(input("Enter month: "))
year =int(input("Enter year: "))


if month == 2:
    if (year % 400 == 0) or (year % 4 == 0 and year % 100 != 0):
        max_days = 29
    else:
        max_days = 28
elif month in (4, 6, 9, 11):
    max_days = 30
else:
    max_days = 31

#next day
if day < max_days:
    day = day + 1
else:
    day = 1
    if month < 12:
        month = month + 1
    else:
        month = 1
        year = year + 1

print("Next Date:")
print("day =", day, "month =", month, "year =", year)
