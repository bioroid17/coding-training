from math import sqrt, ceil
num = int(input())
i = 2
isprime = True
while num >= i:
    for k in range(2, ceil(sqrt(i)) + 1):
        if i % k == 0 and i != 2:
            isprime = False
            break
    else:
        isprime = True
    if isprime and num % i == 0:
        print(i)
        num //= i
    else:
        i += 1
    if sqrt(num) < i and i != 2:
        print(num)
        break

