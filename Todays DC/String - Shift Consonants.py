s = input().strip()
vow = "aeiouAEIOU"
v, c = [i for i in s if i in vow], [i for i in s if i not in vow]
c = c[1:] + [c[0]]
for i in s:
    if i in vow:
        print(v.pop(0), end="")
    else:
        print(c.pop(0), end="")