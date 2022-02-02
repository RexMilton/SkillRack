l = []
for i in range(int(input())):
    a, b = map(int, input().split())
    l.append((a, b))
l = sorted(l, key=lambda i: (i[1], i[0]))
for i in l:
    print(*i)

#

for i in sorted([list(map(int, input().split()))[::-1] for _ in range(int(input()))]):
    print(*i[::-1])
