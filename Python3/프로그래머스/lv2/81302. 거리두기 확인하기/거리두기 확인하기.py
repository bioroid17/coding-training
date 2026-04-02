def search(place, row, col, depth, checked):
    checked[row][col] = True
    if depth >= 2:
        return 0 if place[row][col] == "P" else 1
    if depth == 1 and place[row][col] == "P":
        return 0
    
    directions = [(1, 0), (0, -1), (-1, 0), (0, 1)]
    for direction in directions:
        new_row = row + direction[0]
        new_col = col + direction[1]
        if 0 <= new_row and new_row <= 4 and 0 <= new_col and new_col <= 4 and place[new_row][new_col] != "X" and not checked[new_row][new_col]:
            result = search(place, new_row, new_col, depth + 1, checked)
            if result == 0:
                return result
    return 1

def solution(places):
    answer = []
    
    for place in places:
        results = []
        checked = [[False] * 5, [False] * 5, [False] * 5, [False] * 5, [False] * 5]
        for i in range(0, 5):
            for j in range(0, 5):
                if place[i][j] == "P":
                    result = search(place, i, j, 0, checked)
                    results.append(result)
        answer.append(0 if 0 in results else 1)
        
    return answer