i = int(input())
layer = 1
count = 1
while count < i:
    count += layer*6
    layer += 1
print(layer)
