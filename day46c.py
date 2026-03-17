import os

current_dir=os.getcwd()
print(f"current directoiry:{current_dir}")

print("\nDirectory contents:")
for item in os.listdir('.'):
    print(f"- {item}")
    
os.mkdir('new_directory')
os.makedirs('path/to/new/directory', exist_ok=True)
os.rmdir('new_directory')
    
import shutil
print(shutil.rmtree("path/to/remove",exist_ok=True))