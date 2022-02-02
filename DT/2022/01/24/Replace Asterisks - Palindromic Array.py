n = int(input())
l = input().split()
for i in range(n):
    if l[i] != l[n-i-1] and l[i] != '*' and l[n-i-1] != '*':
        print(-1)
        exit()
    # print(l[i],l[n-i-1])
for i in range(n):
    if l[i] == '*' and l[n-i-1] != '*':
        l[i] = l[n-i-1]
    elif l[i] == l[n-i-1] and l[i] == '*':
        l[i], l[n-i-1] = 1, 1
    # print(l)
print(*l)


n = int(input())
s = input().split()
i, j = 0, n-1
while i <= j:
    if s[i] == '*':
        if s[j] == '*':
            s[i], s[j] = '1', '1'
        else:
            s[i] = s[j]
    elif s[j] == '*':
        s[j] = s[i]
    elif s[i] != s[j]:
        print(-1)
        exit()
    i += 1
    j -= 1
print(*s)
