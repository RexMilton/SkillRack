
n = int(input())
l = input().split()
z = []
for i in l:
    a, b = int(i[0]), int(i[-1])
    s = ''
    if a > b:
        for j in range(a, b-1, -1):
            s += str(j)
    else:
        for j in range(a, b+1):
            s += str(j)
    z.append(int(s))
print(*sorted(z))
