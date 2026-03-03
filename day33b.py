def palindrome(n, temp=0):
    if n == 0:
        return temp
    return palindrome(n // 10, temp * 10 + n % 10)

num = 121
if num == palindrome(num):
    print("Palindrome")
else:
    print("Not Palindrome")