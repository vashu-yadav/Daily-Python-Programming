n=int(input("Enter the number: "))


for i in range(n):
    for j in range(1, n - i + 1):
        print(j, end="")


    print(" ", end="")

    for k in range(i):
        print("* ", end="")

    for j in range(n - i, 0, -1):
        print(j, end="")

    print()
