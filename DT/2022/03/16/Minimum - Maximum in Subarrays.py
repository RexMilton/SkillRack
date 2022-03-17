n,k=map(int,input().split())
l=list(map(int,input().split()))
m=9999999999
for i in range(n-k+1):
    x=max(l[i:i+k])
    if m>x: m=x
print(m)