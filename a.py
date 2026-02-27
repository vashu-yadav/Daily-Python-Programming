import matplotlib.pyplot as plt

subjects = ["Math", "Physics", "Chemistry", "CS"]
marks = [85, 78, 90, 88]

plt.bar(subjects, marks)
plt.xlabel("Subjects")
plt.ylabel("Marks")
plt.title("Bar Graph Example")
plt.show()
