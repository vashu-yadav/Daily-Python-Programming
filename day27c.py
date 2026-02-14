empty_dict={}
print(empty_dict)

student={
    "name":"john","age":20,"courses":["math","computerscience"]}

print("student dictionary:",student)

key_view=student.keys()

print(key_view)

values_view=student.values()

print(values_view)

items_view=student.items()

print(items_view)

age=student.get("age",0)
print(age)

removed_age=student.pop("age",None)
print(removed_age)

print(student)

student.update({"age":21,"grade":"A"})
print(student)
