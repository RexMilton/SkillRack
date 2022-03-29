def timediff(x1,x2):
    h1,m1,s1=map(int,x1.split(":"))
    h2,m2,s2=map(int,x2.split(":"))
    total=(h2-h1)*3600+(m2-m1)*60+(s2-s1)
    return total
d,l={},[]
for i in range(int(input())):
    x=input().split()
    temp=timediff(x[1],x[2])
    d[x[0]]=d.get(x[0],0)+temp 
    if x[0] not in l: l.append(x[0])
d=sorted(d.items(),key=lambda i:(-i[1],l.index(i[0])))
ma=d[0][1]
for i in d:
    if i[1]==ma:
        print(i[0])