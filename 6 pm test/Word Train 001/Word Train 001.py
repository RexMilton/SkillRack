n=int(input())
l=[input().strip() for i in range(n)]
s=''
fl,ll='',''
for i in l:
    fl+=i[0]
    ll+=i[-1] 
for i in fl:
    if i not in ll:
        s=i 
        break 
for i in l:
    if i[0]==s:
        s=i  ; break
print(s)
c=n-1
while c:
    for i in range(n):
        if l[i][0]==s[-1]:
            print(l[i])
            c-=1 
            s=l[i] 
            break
