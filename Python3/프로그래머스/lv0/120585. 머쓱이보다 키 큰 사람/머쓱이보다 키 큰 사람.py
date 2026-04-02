def solution(array, height):
    return len(list(filter((lambda h: h > height), array)))