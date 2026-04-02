n, k = map(int, input().split())

array = [i for i in range(0, n+1)]
array[1] = 0
for num in array:
    if num == 0:
        continue
    else:
        for i in range(num, n+1, num):
            if array[i] == 0:
                continue
            array[i] = 0
            k -= 1
            if k == 0:
                print(i)
                break
    if k == 0:
        break
