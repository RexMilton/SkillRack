r, c = map(int, input().split())
m = [list(map(int, input().split())) for i in range(r)]
xs, ys, xl, yl = 0, 0, 0, 0
s, l = m[0][0], m[0][0]
for i in range(r):
    for j in range(c):
        if m[i][j] > l:
            l = m[i][j]
            xl, yl = i, j
        if m[i][j] < s:
            s = m[i][j]
            xs, ys = i, j
for i in range(min(xs, xl), max(xs, xl) + 1):
    for j in range(min(ys, yl), max(ys, yl) + 1):
        print(m[i][j], end=" ")
    print()
