num = int(input("enter a number:"))
shift = int(input("enter the number of bits to shift:"))
# Left shift
left_shift = num << shift

# Right shift
right_shift = num >> shift

print("Original number:", num)
print("Left shift result:", left_shift)
print("Right shift result:", right_shift)
