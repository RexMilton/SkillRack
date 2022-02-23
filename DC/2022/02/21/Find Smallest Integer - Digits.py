n = int(input())
l = input().split()
k = input().strip()
x = 0
for t in k:
    z = [int(i) for i in l if t in i]
    if z:
        x += min(z)
print(x)
