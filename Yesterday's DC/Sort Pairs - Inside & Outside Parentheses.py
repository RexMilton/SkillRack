n = int(input())
l = input().split()
z = l[:]
zp, zop = [], []
for i in l:
    a, b, f = "", "", 0
    for j in i:
        if j == "(":
            f = 1
        elif j == ")":
            f = 0
        if j.isdigit() and not f:
            a += j
        if j.isdigit() and f:
            b += j
    zop.append(int(a))
    zp.append(int(b))
zp = sorted(zp)
zop = sorted(zop, reverse=1)
for i in z:
    if i[0] == "(":
        print("(", zp.pop(0), ")", zop.pop(0), sep="", end=" ")
    else:
        print(zop.pop(0), "(", zp.pop(0), ")", sep="", end=" ")
