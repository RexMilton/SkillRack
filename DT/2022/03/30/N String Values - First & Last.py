p=int(input());soni=[input().strip()for _ in 'p'*p];aki=int(input());f=0;fuh=""
while(soni!=[""]*p):
    for x in range(len(soni)):
        if len(soni[x])>=aki:
            if x%2==0:fuh+=soni[x][:aki];soni[x]=soni[x][aki:]
            else:fuh+=soni[x][-aki:];soni[x]=soni[x][:-aki]
        else:fuh+=soni[x];soni[x]="";aki+=1
print(fuh)