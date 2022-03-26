row,col=map(int,input().split())
matrix=[input().split() for i in range(row)]
k=int(input())
d={}
for i in range(0,row-k+1,k):
    for j in range(0,col-k+1,k):
        temp=[]
        for i1 in range(i,i+k):
            for j1 in range(j,j+k):
                temp.append(matrix[i1][j1])
        temp1=''.join(temp)
        d[temp1]=d.get(temp1,0)+1
temp=''
for i in d.items():
    if i[1]==1: temp=i[0] ; break   
if temp:
    while temp:
        x=list(temp[:k])
        print(*x,sep=' ')
        temp=temp[k:]
else:
    print(-1)