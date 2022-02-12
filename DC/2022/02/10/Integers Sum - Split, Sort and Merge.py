n = int(input())
s = input().split()
l, z = [], []
for i in s:
    x = i.split("|")
    l.append(x[0])
    z.append(x[1])
print(sum([int(i + j) for i, j in zip(l, z)]), end=" ")
k = sorted([int(i) for i in l] + [int(i) for i in z])
t = 0
for i in range(0, len(k), 2):
    t += int(str(k[i]) + str(k[i + 1]))
print(t)
