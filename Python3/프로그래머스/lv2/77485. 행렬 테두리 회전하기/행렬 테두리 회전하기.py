def solution(rows, columns, queries):
    answer = []
    array = []
    for i in range(0, rows):
        line = []
        for j in range(0, columns):
            line.append(i*columns+j+1)
        array.append(line)
    
    for query in queries:
        minx = query[0] - 1
        miny = query[1] - 1
        maxx = query[2] - 1
        maxy = query[3] - 1
        
        temp = array[minx][miny]
        minval = array[minx][miny]
        for i in range(minx, maxx):
            if array[i+1][miny] < minval:
                minval = array[i+1][miny]
            array[i][miny] = array[i+1][miny]
        for i in range(miny, maxy):
            if array[maxx][i+1] < minval:
                minval = array[maxx][i+1]
            array[maxx][i] = array[maxx][i+1]
        for i in range(maxx, minx, -1):
            if array[i-1][maxy] < minval:
                minval = array[i-1][maxy]
            array[i][maxy] = array[i-1][maxy]
        for i in range(maxy, miny, -1):
            if array[minx][i-1] < minval:
                minval = array[minx][i-1]
            array[minx][i] = array[minx][i-1]
        array[minx][miny+1] = temp
        answer.append(minval)
    return answer