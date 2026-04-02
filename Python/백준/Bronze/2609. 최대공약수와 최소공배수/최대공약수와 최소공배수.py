def euclidean(x, y):
    if x % y == 0:
        return y
    else:
        return euclidean(y, x % y)
a, b = map(int, input().split())
if a >= b:
    lcs = euclidean(a, b)
else:
    lcs = euclidean(b, a)
print(lcs)
print(a * b // lcs)
