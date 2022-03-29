n=int(input())
m=[list(map(int,input().split())) for i in range((n+1)//2)]
total=m[0][n//2] 
l,r,y=n//2-1,n//2+1,1
while y<((n+1)//2)-1:
    total+=(m[y][l]+m[y][r])
    y+=1 
    l-=1 
    r+=1 
total+=sum(m[-1])
print(total)