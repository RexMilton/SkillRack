n = int(input())
l = list(map(int, input().split()))
k = int(input())
t = sum(l)
s = t
for i in range(n):
    x = bin(l[i])[2:]
    x = int(x[:-k]+("0"*k), 2)+(t-l[i])
    if x < s:
        s = x
print(s)
