r, c = map(int, input().split())
m = [input().split() for i in range(r)]
l = []
for i in range(r):
    x = []
    for j in range(c):
        temp = ''
        t, st = '', m[i][j][0]
        for k in m[i][j]:
            if k.isdigit():
                t += k
            else:
                if t:
                    temp += st*int(t)
                st = k
                t = ''
        temp += st*int(t)
        x.append(temp)
    l.append(x)
for i in range(r):
    for j in range(3):
        x = []
        for k in range(c):
            x.append(list(l[i][k][:3]))
            l[i][k] = l[i][k][3:]
        for t in x:
            print(*t, end=' ')
        print()
