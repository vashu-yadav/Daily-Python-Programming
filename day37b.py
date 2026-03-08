def find_average(numbers):
    total = 0
    for i in numbers:
        total += i
    avg = total / len(numbers)
    print("Average:", avg)

find_average([10, 20, 30, 40])