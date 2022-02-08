d = {"H": 1, "He": 4, "C": 12, "N": 14, "O": 16, "Mg": 24, "S": 32, "Ca": 40, "Cu": 63}
s = input().strip()
t, x, i = 0, s[0], 0
while i < len(s):
    if i + 1 < len(s):
        if d.get(x + s[i + 1], 0):
            x += s[i + 1]
            i += 1
    if d.get(x, 0):
        t1 = ""
        while i + 1 < len(s) and s[i + 1].isdigit():
            t1 += s[i + 1]
            i += 1
        if not t1:
            t1 = "1"
        t += d.get(x) * int(t1)
        if i + 1 < len(s):
            x = s[i + 1]
    else:
        x += s[i]
    i += 1
print(t)
