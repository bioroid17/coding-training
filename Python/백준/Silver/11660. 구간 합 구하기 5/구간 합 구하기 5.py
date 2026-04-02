from sys import stdin, stdout
n, m = map(int, stdin.readline().split())
nn = []
for i in range(n):
    nn.append(list(map(int, stdin.readline().split())))
accnn = [[0 for _ in range(n+1)] for _ in range(n+1)]
accnn[1][1] = nn[0][0]
for i in range(1, n+1):
    for j in range(1, n+1):
        accnn[i][j] = accnn[i-1][j] + \
            accnn[i][j-1] + nn[i-1][j-1] - accnn[i-1][j-1]
for i in range(m):
    x1, y1, x2, y2 = map(int, stdin.readline().split())
    result = accnn[x1-1][y1-1]+accnn[x2][y2] - \
        accnn[x2][y1-1]-accnn[x1-1][y2]
    stdout.write(f"{result}\n")
