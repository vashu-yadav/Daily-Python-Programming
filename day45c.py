# Read entire file
with open('data.txt', 'r') as file:
    content = file.read()
    print(content)

# Read line by line (memory efficient for large files)
with open('data.txt', 'r') as file:
    for line_num, line in enumerate(file, 1):
        print(f'Line {line_num}: {line.strip()}')

# Append to file
with open('output.txt', 'a') as file:
    file.write('Appended line.\n')
