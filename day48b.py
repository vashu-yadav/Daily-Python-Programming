# append_file.py

with open("data.txt", "a") as file:
    file.write("This line is appended.\n")

print("Data appended successfully.")