n = int(input())
z = [input().split() for _ in range(n)]
l = int(input())
row = [0 for _ in range(n)]
col = [0 for _ in range(n)]
for i in range(n):
    for j in range(n):
        if z[i][j] == "*":
            row[i] += 1
            col[j] += 1
ans = 0
t = 0
for i in range(l):
    t += col[i]
    ans += row[i]
m = max(t, ans)
for i in range(l, n):
    ans -= row[i - l]
    ans += row[i]
    t -= col[i - l]
    t += col[i]
    m = max(ans, m, t)
print(m)
