r, c = map(int, input().split())
l = [list(map(int, input().split())) for i in range(r)]
k = int(input())
for i in range(0, r - k + 1):
    for j in range(0, c - k + 1):
        u, f = l[i][j] % 10, 1
        for i1 in range(i, i + k):
            for j1 in range(j, j + k):
                if l[i1][j1] % 10 != u:
                    f = 0
                    break
        if f:
            print("Yes")
            exit()
print("No")
