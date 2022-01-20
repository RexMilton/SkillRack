x,y=input().split()
y=int(y)
if y==1:
    print(x)
    exit()
t=x
p=[(1,y),(y-2,y-2)]
pl=0
q=0
while t:
    if len(t)<=p[pl][1]:
        if pl==0:
            q+=1
        else:
            q+=len(t)
        break
    q+=p[pl][0]
    t=t[p[pl][1]:]
    pl+=1
    pl%=2
    # print(q)
z=[["*" for _ in range(q)]for _ in range(y)]
r,c=0,0
rin,cin=1,0
while x:
    # print(r,c)
    t=x[0]
    x=x[1:]
    z[r][c]=t
    r+=rin
    c+=cin
    if r==y:
        r=y-2
        c+=1
        rin,cin=-1,1
    elif r==-1:
        r=1
        c-=1
        rin,cin=1,0
for i in z:
    print(*i,sep='')