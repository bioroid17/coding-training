a = int(input())
b = int(input())
result = a*b
print(a * (b%10))
b //= 10
print(a * (b%10))
b //= 10
print(a * (b%10))
print(result)