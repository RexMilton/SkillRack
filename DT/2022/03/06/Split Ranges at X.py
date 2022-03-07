a = int(input())
s = input().split()
n = int(input())
l = []
for i in s:
    x, y = map(int, i.split("-"))
    if x < n and n < y:
        l.append([x, n])
        l.append([n, y])
    else:
        l.append([x, y])
print(
    *list(str(i[0]) + "-" + str(i[1]) for i in sorted(l, key=lambda j: (j[0], j[1]))),
    sep="\n"
)
