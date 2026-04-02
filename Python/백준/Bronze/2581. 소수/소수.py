min = int(input())
max = int(input())
l = [True] * (max+1)
l[0] = l[1] = False
for i in range(2, max+1):
    for j in range(i * 2, max+1, i):
        if l[i] == False:
            break
        else: 
            l[j] = False

minprime = 10000
count = 0
for i in range(min, max+1):
    if l[i] == True:
        count+=i
        if minprime > i:
            minprime = i
if count != 0:
    print(count)
    print(minprime)
else:
    print("-1")