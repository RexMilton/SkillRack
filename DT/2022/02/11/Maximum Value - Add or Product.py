def pro(x):
    s = 1
    for i in x:
        s *= i
    return s


n = int(input())
l = input().split()
for i in l:
    x = list(map(int, i))
    a, b = sum(x), pro(x)
    print(max(a, b), end=" ")
