l=input().split()
s,o=int(l[0]),''
for i in l[1:]:
    if i[0].isdigit():
        if o=='+': s+=int(i)
        elif o=='-': s-=int(i)
        elif o=='*': s*=int(i)
        else: s//=int(i)
    else:
        if i[0]=='p': o="+"
        elif i[0]=='m' and i[1]=='i': o='-'
        elif i[0]=='m' and i[1]=='u': o='*'
        else: o='/'
print(s)