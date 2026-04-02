from sys import stdin, stdout
nums = sorted([int(stdin.readline()) for _ in range(int(stdin.readline().rstrip()))])
for i in nums:
    stdout.write(f"{i}\n")
