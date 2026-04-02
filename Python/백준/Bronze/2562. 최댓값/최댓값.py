max=0
maxindex = 0
l = []
for i in range(9):
    l.append(int(input()))
    if max < l[i]:
        max = l[i]
        maxindex = i
print(max)
print(maxindex + 1)