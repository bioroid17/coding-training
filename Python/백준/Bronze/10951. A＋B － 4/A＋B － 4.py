import sys
inputs = sys.stdin.readlines()
for i in inputs:
    a, b = map(int, i.split())
    print(a+b)