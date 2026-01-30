a=input("enter the number a:")
b=input("enter the number:")
coordinates=(a,b)

match coordinates:
    case (0,5):
        print("case matched")
    case (0,10):
        print("case matched")
    case (10,5):
        print("case matched")
    case _:
        print("not matched")