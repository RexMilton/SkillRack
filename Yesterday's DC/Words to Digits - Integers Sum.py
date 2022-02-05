n=int(input())
s=0 
d={'zero':0,'one':1,'two':2,'three':3,'four':4,'five':5,'six':6,'seven':7,'eight':8,'nine':9}
for i in input().split():
    x=i
    for j in d.keys():
        x=x.replace(j,str(d.get(j)))
    s+=int(x)
print(s)