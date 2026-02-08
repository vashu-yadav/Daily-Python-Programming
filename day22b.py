n = int(input("Enter number of elements: "))
arr = []

for i in range(n):
    arr.append(int(input()))

largest = second = -10**9

for x in arr:
    if x > largest:
        second = largest
        largest = x
    elif x > second and x != largest:
        second = x

print("Second largest element:", second)
