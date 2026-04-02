indexlimit = 123456 * 2 + 1
isprime = [True] * indexlimit
isprime[0] = isprime[1] = False
for i in range(2, indexlimit):
    for j in range(i * 2, indexlimit, i):
        if isprime[i] == False:
            break
        else: 
            isprime[j] = False

while(True):
    minimum = int(input())
    maximum = 2 * minimum
    count = 0
    if minimum == 0:
        break
    for i in range(minimum + 1, min(indexlimit, maximum+1)):
        if isprime[i] == True:
            count += 1
    print(count)