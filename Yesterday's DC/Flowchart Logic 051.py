x, y = map(int, input().split())
while 1:
    n = int(input())
    if n % 2:
        n += y
        x -= 1
    else:
        n += x
        y -= 1
    print(n, end=" ")
    if n <= 0:
        exit()
