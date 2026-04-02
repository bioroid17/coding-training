from math import sqrt
i = int(input())
n = int(sqrt(2 * i))
if(n * (n + 1) // 2 < i):
    n += 1
if(n % 2 == 1):
    fson = 1
    fmom = n
    for k in range(n * (n + 1) // 2, i, -1):
        fson += 1
        fmom -= 1
else:
    fson = n
    fmom = 1
    for k in range(n * (n + 1) // 2, i, -1):
        fmom += 1
        fson -= 1
print("%d/%d" % (fson, fmom))