def sum_of_cubes(n):
    s = 0
    for i in range(1, n):
        s += i**3
    return s


print(sum_of_cubes(5))