n=input().split() 
s=n[0] 
for i in n[1:]: 
    for j in range(len(i),0,-1): 
        if(s[-j:]==i[:j]): 
            s+=i[j:] 
            break 
print(s)