n = int(input())
if n < 100:
    print(n)
else:
    count = 99
    for num in range(100, n+1):
        a = num // 100
        b = (num - a * 100) // 10
        c = num % 10
        if a - b == b - c:
            count += 1
    print(count)
