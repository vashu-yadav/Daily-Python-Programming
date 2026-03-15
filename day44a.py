def safe_divide(a, b):
    try:
        result = a / b
    except ZeroDivisionError:
        print("Error: Division by zero!")
        return None
    except (ValueError, TypeError):
        print("Error: Invalid input!")
        return None
    else:
        return result
    finally:
        print("Division attempted.")

print(safe_divide(10, 2))  # 5.0
print(safe_divide(10, 0))  # Error
