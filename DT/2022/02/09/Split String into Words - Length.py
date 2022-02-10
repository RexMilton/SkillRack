n = int(input())
s = input().strip()
l = list(map(int, input().split()))
z = []
for i in l:
    z.append(s[:i])
    s = s[i:]
z = sorted(z, key=lambda i: (len(i), z.index(i)))
print(*z, sep="")
