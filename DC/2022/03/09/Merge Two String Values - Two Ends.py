s, x = input().strip(), input().strip()
l = list(s + x)
i, j = 0, -1
while s and x:
    if s[0] > x[0]:
        l[i], l[j] = x[0], s[0]
    else:
        l[i], l[j] = s[0], x[0]
    i += 1
    j -= 1
    s = s[1:]
    x = x[1:]
while s:
    l[i] = s[0]
    i += 1
    s = s[1:]
while x:
    l[i] = x[0]
    i += 1
    x = x[1:]
print("".join(l))
