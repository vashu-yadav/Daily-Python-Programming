n = int(input("enter a number:"))
original = n
rev = 0

while n>0:
    
    rev=rev*10+(n%10)
    n=n//10

if rev == original:
    print(original,"is a palindrome")
else:
    print(original,"is not a palindrome")