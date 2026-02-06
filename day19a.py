n = int(input("Enter a number: "))
rev =0
temp =n

while temp>0:
    rev=rev *10 + temp %10
    temp = temp // 10
    
if rev==n:
    print("Number is a palindrome")
else:
    print("Number is not a palindrome")
