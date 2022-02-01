n = int(input())
l = list(map(int, input().split()))
o, e = [], []
for i in range(len(l)):
    if (i+1) % 2:
        o.append(l[i])
    else:
        e.append(l[i])
if len(l) % 2:
    print(*o[::-1], end=' ')
    print(*e)
else:
    print(*e[::-1], end=' ')
    print(*o)
