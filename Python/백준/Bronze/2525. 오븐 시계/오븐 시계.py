hour, min = map(int, input().split())
addmin = int(input())
hour += addmin // 60
min += addmin % 60
hour += min // 60
min = min % 60
hour = hour % 24
print(hour, min)