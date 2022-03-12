r,c=map(int,input().split())
l=[list(map(int,input().split())) for i in range(r)]
dictin={}
for i in range(r):
    for j in range(c):
        dictin[l[i][j]]=[i,j]
dictin=sorted(dictin.items(),key=lambda i:i[0])
s=0
for i in range(len(dictin)):
    if i<len(dictin)-1:
        s+=max(abs(dictin[i][1][0]-dictin[i+1][1][0]),abs(dictin[i][1][1]-dictin[i+1][1][1]))
print(s)