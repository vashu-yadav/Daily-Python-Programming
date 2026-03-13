# read_lines.py
with open('data.txt', 'r') as file:
    for line_num, line in enumerate(file, 1):
        print(f'Line {line_num}: {line.strip()}')
