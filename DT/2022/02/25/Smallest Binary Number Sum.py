n = int(input())
s = 0
for i in list(map(int, input().split())):
    y = 1
    while 1:
        x = int(bin(y)[2:])
        if x % i == 0:
            s += y
            break
        y += 1
    # print(s,y)
print(s)
