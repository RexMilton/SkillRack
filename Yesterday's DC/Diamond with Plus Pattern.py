n = int(input())
l = (2 * n) - 2
z = ["-" * l + "*"]
c, t = 1, l - 2
for i in range(1, n - 1):
    x = "*" + ("-" * c) + "*" + ("-" * c) + "*" + "-" * t
    z.append(x[::-1])
    c += 2
    t -= 2
print(*z, sep="\n")
x = ""
for i in range(l):
    x += "*-"
x += "*"
print(x)
print(*z[::-1], sep="\n")
