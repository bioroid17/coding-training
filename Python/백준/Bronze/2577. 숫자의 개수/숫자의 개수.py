a = int(input())
b = int(input())
c = int(input())
result = str(a*b*c)

for i in range(0, 10):
    count = 0
    for j in result:
        if j == str(i):
            count += 1
    print(count)