def solution(s, n):
    result = ""
    for l in s:
        if l == " ":
            result += " "
        elif ord('a') <= ord(l) and ord(l) <= ord('z'):
            result += chr(((ord(l) + n) - 97) % 26 + 97)
        else:
            result += chr(((ord(l) + n) - 65) % 26 + 65)
    return result