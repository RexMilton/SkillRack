m, n = map(int, input().split())
while m < n:
    print(m, end=" ")
    if n % 10 != 0:
        if n % 2 != 0:
            m += n % 10
        else:
            m += 1
    else:
        m += 1
    n -= 1
