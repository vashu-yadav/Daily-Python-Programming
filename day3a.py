total_seconds = int(input("Enter seconds: "))


hours = total_seconds // 3600
remaining = total_seconds % 3600
minutes = remaining // 60
seconds = remaining % 60

print(f"{total_seconds} seconds = {hours}h {minutes}m {seconds}s")