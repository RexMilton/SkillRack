a, b, c, d = map(int, input().split())
n = int(input())
si, sj, ei, ej = 0, 0, n - 1, n - 1
m = [[0 for i in range(n)] for j in range(n)]
ctr = 0
while ctr < n * n:
    m[si][sj], m[si][ej] = a, b
    for i in range(sj + 1, ej):
        m[si][i] = m[si][i - 1] + 1
        ctr += 1
    ctr += 2
    m[si][ej], m[ei][ej] = b, c
    for i in range(si + 1, ei):
        m[i][ej] = m[i - 1][ej] + 1
        ctr += 1
    ctr += 1
    m[ei][sj] = d
    for i in range(ej - 1, sj, -1):
        m[ei][i] = m[ei][i + 1] + 1
        ctr += 1
    ctr += 1
    for i in range(ei - 1, si, -1):
        m[i][sj] = m[i + 1][sj] + 1
        ctr += 1
    si, sj, ei, ej = si + 1, sj + 1, ei - 1, ej - 1
for i in m:
    print(*i)
