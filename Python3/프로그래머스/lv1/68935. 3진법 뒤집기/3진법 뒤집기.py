def solution(n):
    s = ''
    while n > 0:
        s += str(n % 3)
        n //= 3
    digits = len(s)
    answer = 0
    for i in range(digits):
        print(i)
        answer += int(s[digits-1-i]) * (3**i)
    return answer