s = input().strip()
d, a = [], []
for i in s:
    d.append(i) if i.isdigit() else a.append(i)
n = int(input())
l = len(d)//(n*n)
dm, am = [], []
for i in range(n):
    x = []
    for j in range(n):
        x.append(d[:l])
        d = d[l:]
    dm.append(x)
for i in range(n):
    x = []
    for j in range(n):
        x.append(a[0])
        a = a[1:]
    am.append(x)
for i in dm:
    for j in i:
        print(''.join(j), end=" ")
    print()
for i in am:
    print(*i)
