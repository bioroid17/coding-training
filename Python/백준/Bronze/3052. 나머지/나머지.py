l = []
for i in range(10):
    l.append(int(input()) % 42)
l.sort()
count = 1
for i in range(1, 10):
    if l[i] != l[i-1]:
        count += 1
print(count)