n, m = map(int, input().split())
nums = list(map(int, input().split()))
sums = [nums[0]]
for i in range(1, n):
    sums.append(sums[i-1]+nums[i])
modcounts = [0]*m
for i in sums:
    modcounts[i % m] += 1
count = modcounts[0]
for i in modcounts:
    count += (i * (i-1) // 2)
print(count)
