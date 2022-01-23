s = input().split()
f = 0
for i in s:
    if i == 'CAPSLOCK':
        if f:
            f = 0
        else:
            f = 1
    elif len(i) > 5 and i[:5] == "SHIFT":
        x = i.split("+")
        print(x[1].lower(), end='') if f else print(x[1].upper(), end='')
    elif f:
        print(i.upper(), end='')
    else:
        print(i, end='')
