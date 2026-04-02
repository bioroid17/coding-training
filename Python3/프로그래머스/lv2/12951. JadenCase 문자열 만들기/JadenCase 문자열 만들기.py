def solution(s):
    answer = ''
    l = s.split(' ')
    for word in l:
        answer += word.capitalize()
        answer += ' '
    return answer[:-1]