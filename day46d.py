import  os 
import shutil

with open("example.txt","w") as f:
    f.write("This is a sample file for testing.\n")
    f.write("second line of text.")
    
with open("source.txt","w")as f:
    f.write("This file be copied.")
    
with open("file_to_delete.txt","w") as f:
    f.write("This file will be delted.")
    
with open("old_name.txt","w") as f:
    f.write("this file will be renamed.")
    
print("All temporary files created successfully!")
    
path='example.txt'

if os.path.exists(path):
    print(path,"exists!")
    
if os.path.isfile(path):
    print(path,"is a file")
elif os.path.isdir(path):
    print(path, "is a directory")
    
size= os.path.getsize(path)
print(size,"bytes")

mod_time = os.path.getmtime(path)

from datetime import datetime
print(datetime.fromtimestamp(mod_time))

shutil.copy('source.txt', 'destination.txt')

os.rename('old_name.txt', 'new_name.txt')

os.rename('file_to_delete.txt')
