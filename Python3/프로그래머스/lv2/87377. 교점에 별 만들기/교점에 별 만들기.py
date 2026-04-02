def solution(line):
    answer = []
    n = len(line)
    coordinates = set()
    maxx = -100000000000
    maxy = -100000000000
    minx = 100000000000
    miny = 100000000000
    for i in range(0, n-1):
        for j in range(i+1, n):
            a1, b1, c1 = line[i]
            a2, b2, c2 = line[j]
            
            # 두 선이 평행
            if a1 * b2 == a2 * b1 and c1 != c2:
                continue
            
            if a1 == 0:
                y = c1 / (-b1)
                x = (-b2*y-c2)/a2
            elif b1 == 0:
                x = c1 / (-a1)
                y = (-a2*x-c2)/b2
            elif a2 == 0:
                y = c2 / (-b2)
                x = (-b1*y-c1)/a1
            elif b2 == 0:
                x = c2 / (-a2)
                y = (-a1*x-c1)/b1
            else:
                y = -(c1*a2 - c2*a1) / (b1*a2 - b2*a1)
                x = -(c1*b2 - c2*b1) / (a1*b2 - a2*b1)
            
            if x == int(x) and y == int(y):
                nx = int(x)
                ny = int(y)
                if nx < minx:
                    minx = nx
                if ny < miny:
                    miny = ny
                if nx > maxx:
                    maxx = nx
                if ny > maxy:
                    maxy = ny
                coordinates.add((nx,ny))
    for i in range(miny, maxy+1):
        s = ""
        for j in range(minx, maxx+1):
            if (j, i) in coordinates:
                s += "*"
            else:
                s += "."
        answer.append(s)
    answer.reverse()
    return answer