a = list(input().strip())
n = input().strip()
t = -1
for i in range(len(a)):
    if a[i] == n:
        p = int("".join(a[:i] + a[i + 1 :]))
        if t == -1:
            t = p
        t = max(t, p)
print(t)
