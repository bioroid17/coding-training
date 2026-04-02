string = input()
l =[0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0]
for i in string:
    for j in range(0, 26):
        if(ord(i.upper()) == ord('A') + j):
            l[j] += 1
            break
max = 0
maxindex = 0
for i in range(len(l)):
    if max < l[i]:
        max = l[i]
        maxindex = i
k=0
while k < len(l):
    if l[k] == max and k != maxindex:
        print("?")
        break
    k += 1
else:
    print(chr(maxindex+65))