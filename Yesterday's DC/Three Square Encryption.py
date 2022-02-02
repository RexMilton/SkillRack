def fun(a, b):
    print(a, b//3+1, b % 3+1, sep='', end='')


a = list(input().strip())
b = list(input().strip())
p, q, r = b[0:9], b[9:18], b[18:]
for i in range(len(a)):
    if a[i] in p:
        fun(1, p.index(a[i]))
    elif a[i] in q:
        fun(2, q.index(a[i]))
    else:
        fun(3, r.index(a[i]))

#

a, s = input().strip(), input().strip()
for i in a:
    t = s.index(i)+1
    print((t+8)//9, [3, 1, 2][((t+2)//3) % 3],
          [3, 1, 2][(t % 9) % 3], sep='', end='')
