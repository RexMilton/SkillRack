s1,s2=input().strip(),input().strip()
n=int(input())
l1,l2=len(s1),len(s2)-2
print(s1[0]+"*"*l2+s1[0])
flag=-1
for i in range(n):
    if flag>0:
        for j in range(l1-2,0,-1): print(s1[j]+"*"*l2+s1[j])
        flag*=-1        
    else:
        for j in range(1,l1-1): print(s1[j]+"*"*l2+s1[j])
        flag*=-1
    print(s2)
if flag<0:
    for j in range(1,l1): print(s1[j]+"*"*l2+s1[j])
else:
    for j in range(l1-2,-1,-1): print(s1[j]+"*"*l2+s1[j])