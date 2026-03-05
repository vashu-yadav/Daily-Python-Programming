def find_max_min(lst):
    max_val = lst[0]
    min_val = lst[0]

    for i in lst:
        if i > max_val:
            max_val = i
        if i < min_val:
            min_val = i

    print("Maximum:", max_val)
    print("Minimum:", min_val)


numbers = [4, 7, 2, 9, 1]
find_max_min(numbers)