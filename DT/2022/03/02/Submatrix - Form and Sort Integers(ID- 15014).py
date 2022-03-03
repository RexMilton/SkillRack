p, q = map(int, input().split())
soni = [list(map(int, input().split())) for _ in "p" * p]
fuh = []
for x in range(0, p, 3):
    for y in range(0, q, 3):
        aki = [[str(soni[a][b]) for b in range(y, y + 3)] for a in range(x, x + 3)]
        n = ""
        m = ""
        for a in aki:
            fuh += [int("".join(a))]
        for a in zip(*aki):
            fuh += [int("".join(list(a)))]
        for a in range(3):
            n += aki[a][a]
            m += aki[a][3 - a - 1]
        fuh += [int(n), int(m)]
print(*sorted(fuh))
