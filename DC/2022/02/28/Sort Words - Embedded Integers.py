def ret(s):
    return int("".join([i for i in s if i.isdigit()]))


l = input().split()
l = sorted(l, key=lambda i: ret(list(i)))
print(*l)
