def solution(s):
    try:
        arr = []
        for c in s:
            if c == "(":
                arr.append(0)
            else:
                arr.pop()
        if len(arr) == 0:
            return True
        else:
            return False
    except:
        return False