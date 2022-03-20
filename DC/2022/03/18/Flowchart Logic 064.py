n,a,b,c=map(int,input().split())
val=ctr=1 
while ctr<=n:
    print(val,end=' ')
    if val==a:
        val=b 
    else:
        if val==c:
            val=0 
    val+=1 
    ctr+=1 