n = int(input())
l = list(map(int, input().split()))
while l:
    for i in range(len(l)):
        l[i] //= 2
    print(*l)
    z = [i for i in l if i % 2 == 0]
    l = z[:]
