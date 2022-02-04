n = int(input())
f = 1
l = list(map(int, input().split()))
for i in range(n-1):
    for j in range(i+1, n):
        if bin(l[i])[2:] == bin(l[j])[2:][::-1]:
            print(l[i], l[j])
            f = 0
if f:
    print(-1)
