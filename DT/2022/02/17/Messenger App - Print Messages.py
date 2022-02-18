d, l = {}, {}
c = 0
for i in range(int(input())):
    x = input().strip().split(":")
    d[x[0]] = d.get(x[0], []) + [x[1]]
    l[x[0]] = c
    c += 1
d = sorted(d.items(), key=lambda i: -l.get(i[0]))
for i in d:
    print(i[0], i[1][-1], sep=":")
