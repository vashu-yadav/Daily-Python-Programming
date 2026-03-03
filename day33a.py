
def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)

# Example
print(gcd(48, 18))