a=int(input())
c=0
z=list(map(int,input().split()))
while 1:
    l=[z[0]]
    f=1
    for i in range(1,len(z)):
        if z[i-1]>=z[i]:
            l.append(z[i])
        else:
            f=0
    z=l[:]
    if f:
        break
    c+=1
print(c)