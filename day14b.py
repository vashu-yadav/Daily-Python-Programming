while True:
    n = int(input("Enter a number (0 to stop): "))

    if n == 0:
        break

    if n % 2 == 0:
        print("Even")
    else:
        print("Odd")
