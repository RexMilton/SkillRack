q=int(input())
z=list(map(int,input().split()))
if q==4: 
    print(z[0]*z[1]*z[2]*z[3])   
    exit()
n,p=[],[]
for i in z:  
    if i<0:   
        n.append(i)
    else: 
        p.append(i)
p=sorted(p,reverse=1)
n=sorted(n)
if len(p)<2:  
    print(n[0]*n[1]*n[2]*n[3]) 
    exit()
if len(n)<2:
    print(p[0]*p[1]*p[2]*p[3])  
    exit()
if len(n)>=2 and len(p)>=2: 
    nt=n[0]*n[1]
    pt=p[0]*p[1]  
    p=p[2:]  
    n=n[2:]  
    if nt==pt:     
        print(nt*pt)   
        exit() 
    elif nt>pt:  
        if len(n)>1:  
            nt2=n[0]*n[1]   
            if nt2>pt:   
                print(nt*nt2)  
                exit()  
            else: 
                print(nt*pt)    
                exit()  
        else:      
            print(nt*pt)  
            exit()  
    else:  
        # pt>nt  
        if len(p)>1: 
            pt2=p[0]*p[1]     
            if pt2>nt:   
                print(pt*pt2)       
                exit()   
            else:  
                print(pt*nt)  
                exit()  
        else:  
            print(nt*pt)   
            exit()