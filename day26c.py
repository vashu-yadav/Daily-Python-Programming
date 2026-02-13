words = {
    "apple": set("apple"),
    "banana": set("banana"),
    "engineering": set("engineering")
}

for word, letters in words.items():
    print(f"{word} has {len(letters)} unique letters → {letters}")
