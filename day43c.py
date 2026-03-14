# dict_ops.py
sentence = "python is fun python coding is great"
words = sentence.lower().split()
freq = {}
for word in words:
    freq[word] = freq.get(word, 0) + 1
print("Word frequencies:", freq)
