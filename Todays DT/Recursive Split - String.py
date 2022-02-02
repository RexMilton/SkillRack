def fun(x):
    t = len(x)//2
    return [x[:t], x[t:]]


a = [input().strip()]
f = 1
while f:
    f = 0
    l = []
    for i in a:
        if len(i) == 1:
            l.append(i)
            continue
        t = fun(i)
        l += t
        f = max(len(l[-2])-1, len(l[-1])-1, f)
    print(*l)
    a = l[:]
