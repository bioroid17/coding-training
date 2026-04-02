n = int(input())
impossible = [1, 2, 4, 7]
count = 0
if n % 5 == 0:
    count = n // 5
elif impossible.count(n) > 0:
    count = -1
else:
    for i in range(3, n + 1, 3):
        count += 1
        if ((n - i) % 5 == 0):
            count += ((n - i) // 5)
            break
print(count)