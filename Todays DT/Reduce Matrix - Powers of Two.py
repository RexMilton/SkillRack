n = int(input())
m = [list(map(int, input().split())) for i in range(n)]
while n > 1:
    z = []
    m1 = []
    for i in range(0, n, 2):
        m2 = []
        for j in range(0, n, 2):
            m2.append(m[i][j] + m[i][j + 1] + m[i + 1][j] + m[i + 1][j + 1])
        m1.append(m2)
    for i in m1:
        print(*i)
    m = m1[:]
    n //= 2
