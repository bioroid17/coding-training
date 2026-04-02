from sys import stdin, stdout
n = int(stdin.readline().rstrip())
times = list(map(int, stdin.readline().rstrip().split()))
times.sort()
sums = [times[0]]
cumsums = [sums[0]]

for i in range(1, n):
    sums.append(sums[i-1]+times[i])
    cumsums.append(cumsums[i-1]+sums[i])

print(cumsums[-1])
