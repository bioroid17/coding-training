n = int(input())
l = []
l.extend(map(int, input().split()))
max = 0

for i in l:
    if max < i:
        max = i
sum = 0
for i in l:
    sum += (i/max*100)
print(sum/n)