def d(n):
    num = n
    while n > 0:
        num += n%10
        n //= 10
    return num
l = []
for i in range(0, 10036):
    l.append(0)
for i in range(1, 10001):
    l[d(i)] += 1

for i in range(1, 10001):
    if(l[i] == 0):
        print(i)
