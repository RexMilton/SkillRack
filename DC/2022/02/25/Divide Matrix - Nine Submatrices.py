r, c = map(int, input().split())
m = [list(map(int, input().split())) for i in range(r)]
x, y, p, q = map(int, input().split())


def mats(x1, y1, x2, y2):
    s = 0
    for i in range(x1, x2):
        for j in range(y1, y2):
            # print(m[i][j],end=' ')
            s += m[i][j]
        # print()
    print(s, end=" ")


mats(0, 0, x, p)
mats(0, p, x, q)
mats(0, q, x, c)
mats(x, 0, y, p)
mats(x, p, y, q)
mats(x, q, y, c)
mats(y, 0, r, p)
mats(y, p, r, q)
mats(y, q, r, c)
