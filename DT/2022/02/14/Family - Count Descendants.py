n = int(input())
d = {}
for _ in range(n):
    x, y = input().split()
    d[y] = d.get(y, []) + [x]
s = input().strip()
l = [s]
v = {}
ans = 0
while l:
    t = l.pop(0)
    ans += 1
    l += d.get(t, [])
print(ans)
