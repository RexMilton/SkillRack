r, c = map(int, input().split())
m = [list(map(int, input().split())) for i in range(r)]
ls = min(r, c)
count = -1
for i in range(2, ls + 1):
    for i1 in range(0, r - i + 1):
        for j1 in range(0, c - i + 1):
            if m[i1][j1] == 0:
                continue
            else:
                x = []
                for i2 in range(i1, i1 + i):
                    y = []
                    for j2 in range(j1, j1 + i):
                        y.append(m[i2][j2])
                    x.append(y)
                z = list(zip(*x))
                if (
                    x[0] == x[-1]
                    and z[0] == z[-1]
                    and x[0] == list(z[0])
                    and x[0] == [1] * i
                ):
                    count = i
print(count)
