n = int(input())
nums = input().split()
for i in range(n):
    nums[i] = int(nums[i])
array = [i for i in range(0, 1001)]
array[1] = 0
for num in array:
    if num == 0:
        continue
    else:
        for i in range(num*2, 1001, num):
            array[i] = 0
count = 0
for i in range(n):
    if nums[i] in array:
        count += 1

print(count)
