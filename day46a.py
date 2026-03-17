lines=['first line\n','second line\n', 'third line']
with open('lines.txt','w') as file:
    file.writelines(lines)
    
with open('lines.txt', 'r')as file:
    for line in file:
        print(line.strip())