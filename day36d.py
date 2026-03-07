def check_prime(n):
    if n <= 1:
        print("Not Prime")
        return
    
    for i in range(2, n):
        if n % i == 0:
            print("Not Prime")
            return
    
    print("Prime")


check_prime(7)