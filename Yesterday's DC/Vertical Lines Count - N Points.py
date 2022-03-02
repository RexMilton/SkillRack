d = {}
for i in range(int(input())):
    x, y = map(int, input().split())
    d[x] = d.get(x, []) + [y]
c, k = 0, int(input())
for i in d.items():
    for i1 in range(len(i[1])):
        for j1 in range(i1 + 1, len(i[1])):
            if abs(i[1][i1] - i[1][j1]) == k:
                c += 1
print(c)
