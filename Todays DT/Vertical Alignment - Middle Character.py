n=int(input())
l=[input().strip() for i in range(n)]
m=0
for i in l:
    if len(i)>m: m=len(i)
for i in range(n):
    if len(l[i])<m:
        x=m-len(l[i])
        l[i]='*'*(x//2)+l[i]+'*'*(x//2)
m=[]
for i in l:
    m.append(list(i))
for i in zip(*m):
    print(*i,sep='')