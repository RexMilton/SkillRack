l = {}
for i in range(int(input())):
    x, y = map(int, input().split())
    l[y] = l.get(y, []) + [x]
z = []
for i in l.items():
    if len(i[1]) > 1:
        for i1 in range(len(i[1])):
            for j1 in range(i1 + 1, len(i[1])):
                z.append(abs(i[1][i1] - i[1][j1]))
print(*sorted(z)) if z else print(-1)
