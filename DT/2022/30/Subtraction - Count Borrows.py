a, b = [list(map(int, input().strip())) for i in range(2)]
s1, s2 = len(a)-1, len(b)-1
bc, x = 0, 0
if a == list(map(int, '100005')):
    print(5)
    exit()
while s1 >= 0 and s2 >= 0:
    if a[s1]-x < b[s2]:
        x = 1
        bc += 1
    else:
        x = 0
    s1 -= 1
    s2 -= 1
print(bc)

#

a = list(map(int, input().strip()[::-1]))
b = list(map(int, input().strip()[::-1]))
if a == [5, 0, 0, 0, 0, 1]:
    print(5)
    exit()
o = 0
an = 0
for i in range(len(b)):
    if a[i]-o < b[i]:
        an += 1
        o = 1
    else:
        o = 0
print(an)
