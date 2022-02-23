n = int(input())
l = []
for i in list(map(int, input().split())):
    n = bin(i)[2:]
    x = len(n) // 2
    if len(n) % 2:
        a, b = n[: x + 1], n[x:]
    else:
        a, b = n[:x], n[x:]
    l.append(int(a, 2))
    l.append(int(b, 2))
print(*sorted(l))
