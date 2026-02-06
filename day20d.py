#Factorian 

n = int(input("Enter a number: "))

temp = n
sum_fact =0

while temp>0:
    digit = temp%10
    fact=1
    
    for i in range(1,digit +1):
        fact=fact*i
        
    sum_fact+=fact
    temp//=10

if sum_fact==n:
    print(n,"is a Factorian number")
else:
    print(n,"is not a Factorian number")
