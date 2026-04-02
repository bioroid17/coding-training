t = int(input())
isgroup = 0
while(t > 0):
    s = input()
    checker = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0]
    for i in range(len(s)):
        if i == 0:
            checker[ord(s[i]) - 97] += 1
        elif i > 0 :
            if s[i] == s[i-1]:
                checker[ord(s[i]) - 97] += 1
            else:
                if checker[ord(s[i]) - 97] != 0:
                    isgroup -= 1
                    break
                else:
                    checker[ord(s[i]) - 97] += 1
    isgroup += 1
    t -= 1
print(isgroup)