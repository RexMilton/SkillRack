x,y=map(int,input().split())
z=list(zip(*list(list(map(int,input().split())) for _ in range(x))))
l=list(zip(*list(list(map(int,input().split())) for _ in range(x))))
ans=[]
if l[0] in z:
    i=z.index(l[0])
    ans=z[:i]
    for p in zip(z[i:],l):
        o=[]
        for q,w in zip(*p):
            o.append(q+w)
        ans.append(o)
    ans+=l[len(z[i:]):]
else:
    i=z.index(l[-1])+1
    ans=l[:-i]
    for p in zip(z[:i],l[-i:]):
        o=[]
        for q,w in zip(*p):
            o.append(q+w)
        ans.append(o)
    ans+=z[i:]
for i in list(zip(*ans)):
    print(*i)