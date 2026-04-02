def solution(n):
    answer = []
    array = []
    for i in range(1, n+1):
        array.append([0]*i)
    row, col = 0, 0
    cnt = 1
    dirs = [(1, 0), (0, 1), (-1, -1)]
    d_ind = 0
    while cnt <= n * (n + 1) // 2:
        array[row][col] = cnt
        cnt += 1
        nrow = row + dirs[d_ind][0]
        ncol = col + dirs[d_ind][1]
        if not (0 <= nrow and nrow < n and 0 <= ncol and ncol <= nrow) or array[nrow][ncol] != 0:
            d_ind = (d_ind + 1) % 3
        row += dirs[d_ind][0]
        col += dirs[d_ind][1]
    for line in array:
        answer += line
    return answer