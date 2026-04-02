indexlimit = 10001
isprime = [True] * indexlimit
isprime[0] = isprime[1] = False
for i in range(2, indexlimit):
    for j in range(i * 2, indexlimit, i):
        if isprime[i] == False:
            break
        else: 
            isprime[j] = False

t = int(input())
while t > 0:
    evennum = int(input())
    if(evennum == 4):
        print("2 2")
        t -= 1
        continue
    minsub = 100000
    minsuba = minsubb = 10000
    for i in range(3, evennum, 2):
        if isprime[i] == False or isprime[evennum - i] == False:
            continue
        a, b = i, evennum - i
        if a > b:
            break
        if minsub > b - a:
            minsub = b - a
            minsubb = b
            minsuba = a
    print(minsuba, minsubb)
    t -= 1