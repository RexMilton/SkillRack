n = int(input())
l = [input().strip() for i in range(n)]
ch, x = "", ""
for i in l:
    x += "".join(set(i))
for i in x:
    if x.count(i) == n:
        ch = i
p = 0
for i in range(n):
    for j in range(len(l[i])):
        if l[i][j] == ch:
            p = j
            break
    l[i] = l[i][j:]
l = sorted(l)
print(*l, sep="\n")
