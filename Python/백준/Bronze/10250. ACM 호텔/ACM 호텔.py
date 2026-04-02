t = int(input())
while(t > 0):
    h, w, n = map(int, input().split())
    if n % h == 0:
        x = h
        y = n // h
    else:
        x = n % h
        y = n // h + 1
    print("%d%02d" % (x, y))
    t -= 1