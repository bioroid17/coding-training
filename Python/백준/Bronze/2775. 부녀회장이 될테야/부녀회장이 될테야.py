aptlist = [[1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14]]
for a in range(1, 15):
    aptlist.append([0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0])
    for b in range(0, 14):
        if b == 0:
            aptlist[a][b] = 1
        else:
            if(aptlist[a][b] == 0):
                aptlist[a][b] = aptlist[a][b-1] + aptlist[a-1][b]
            else:
                continue
t = int(input())
while(t > 0):
    k = int(input())
    n = int(input())
    print(aptlist[k][n-1])
    t -= 1