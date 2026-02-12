a={1,2,3}
b={3,4,5}

print(a)
print(b)

union_set=a|b
print(union_set)
#or
print(a.union(b))

intersection=a&b
print(intersection)
#or
print(a.intersection(b))

difference=a-b

print(difference)
#or
print(a.difference(b))
print(b.difference(a))

symmetric_difference=a^b
print(symmetric_difference)#a^b=a+b-2a&b
print(a.symmetric_difference(b))

subset=a<=b
superset=a>=b
print(subset)
print(a.issubset(b))
print(a.issuperset(b))
print(superset)