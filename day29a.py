# Program using items()

product = {
    "laptop": 60000,
    "mobile": 20000,
    "tablet": 15000
}

for key, value in product.items():
    print(key, "=", value)
