r,c=map(int,input().split())
m=[input().split() for i in range(r)]
count=0
for i in range(r):
    for j in range(c-1):
        if m[i][j]=='#' and m[i][j+1]==m[i][j]:
            m[i][j]=m[i][j+1]='s'
            count+=1
for i in range(r):
    for j in range(c):
        if i+1<r and m[i][j]=='#' and m[i+1][j]==m[i][j]: m[i][j]=m[i+1][j]='s' ; count+=1
        elif m[i][j]=='#': m[i][j]='b' ; count+=1
itr=1
for i in m:
    print(*i)
# print(count)
while count:
    if itr%2:
        for j in range(c):
            for i in range(r):
                if i+1<r and m[i][j]=='s' and m[i+1][j]!='s':
                    break
                elif i+1<r and m[i][j]=='s' and m[i+1][j]==m[i][j]:
                    m[i][j]=m[i+1][j]='*'
                    count-=1 
                    break
                elif m[i][j]=='b': 
                    m[i][j]='*'
                    count-=1
                    break 
    else:
        for i in range(r):
            for j in range(c):
                if j+1<c and m[i][j]=='s' and m[i][j+1]!='s':
                    break
                elif j+1<c and m[i][j]=='s' and m[i][j+1]==m[i][j]:
                    m[i][j]=m[i][j+1]='*'
                    count-=1 
                    break 
                elif m[i][j]=='b':
                    m[i][j]="*"
                    count-=1
                    break 
    itr+=1
    print(itr-1)
    for i in m:
        print(*i)