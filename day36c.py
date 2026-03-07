def reverse_string(text):
    rev = ""
    for i in text:
        rev = i + rev
    print("Reversed string:", rev)

reverse_string("Python")