d, ret = {}, {}
for i in range(int(input())):
    x, y = input().split()
    d[x] = d.get(x, []) + [y]
    ret[y] = ret.get(y, []) + [x]
s = input().strip()
a, b = [], []
if d.get(s):
    for i in d.get(s):
        if i not in a:
            a.append(i)
else:
    a.append(-1)
if ret.get(s):
    for i in ret.get(s):
        if i not in b:
            b.append(i)
else:
    b.append(-1)
print(s + " ->", *a)
print(s + " <-", *b)
