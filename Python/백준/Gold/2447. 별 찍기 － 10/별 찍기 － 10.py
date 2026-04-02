def starprint(n, xlim, ylim):
    global starlist

    if n <= 1:
        return starlist
 
    for i in range(xlim[0], xlim[1]):
        for j in range(ylim[0], ylim[1]):
            starlist[i][j] = " "

    xstart = xlim[0]
    ystart = ylim[0]
    for i in range(-1, 2, 1):
        for j in range(-1, 2, 1):
            if(i == 0 and j == 0):
                continue
            xlim[0] = xstart + i*n//3 + n//9
            xlim[1] = xlim[0] + n//9
            ylim[0] = ystart + j*n//3 + n//9
            ylim[1] = ylim[0] + n//9
            starlist = starprint(n//3, xlim, ylim)
    return starlist


n = int(input())

starlist = []
for i in range(n):
    starlist.append([])
    for j in range(n):
        starlist[i].append('*')

xlim = [n//3, n//3*2]
ylim = [n//3, n//3*2]

newlist = starprint(n, xlim, ylim)

for i in range(n):
    for j in range(n):
        print(newlist[i][j], end="")
    print()
