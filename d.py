'''even = [x for x in range(10)if x%2==0]
matrix=[[1,2,3],[4,5,6],[7,8,9]]

flattened=[num for row in matrix for num in row]#flattened 2d array

print(flattened)'''

'''mixed_list=[42,"python",[1,2,3,4],(7,8,9),{"name":"vinod",'age':33},True]
print(mixed_list)'''
#single elment in list
'''num=[5]'''


'''n=5
for i in range(n,0,-1):
    for j in range(1,i+1):
        print(j,end="")

    for k in range(n-i):
        print("*",end="")

    for j in range(i,0,-1):
        print(j,end="")

    print()'''

#Tuple

'''num=()
print(num)

num=(1,2,2,3,4,5)
print(num)'''

'''num=tuple(range(10))
print(num)'''

'''mixed=("Hello",3.14,[1,2,3,4],{'name':'vinod','age':33})

char=tuple("python")
print(mixed)
print(char)

fruit="apple","banana","cherry","coconut"
print(fruit)'''

'''num=(1,2,3,4,4,5,6)

print(num(::-1))'''

'''t1=[1,2,3]
t2=[4,5,6]
combined=t1+t2
print(t1+t2)
#single elment in tuple
num1=(0,)*5

print(num1)
exist=3 in t1
length=len(t1)

print(exist)
print(length)'''

'''num=(1,2,3,4,4,5,6)

first=num[0]
#tuple object is not callable so we write it as list
# last=num(-1)
some=num[2:6]

print(last)'''

# nested tuple
cordinates=((0,2),(2,4),(5,6),7,8)
x,y=coordinates[2]
x=5
y=6
point=(1,2)
x1,y1=point
a,b=b,a