n = int(input())
words = []
for _ in range(n):
    words.append(input())

words.sort(key=lambda x: (len(x), x))
for i in range(n):
    if i >= 1 and words[i] == words[i-1]:
        continue
    else:
        print(words[i])
