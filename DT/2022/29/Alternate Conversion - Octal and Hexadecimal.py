n = bin(int(input()))[2:][::-1]
f, s = 1, ''
while n:
    if f > 0:
        s += str(oct(int(n[:3][::-1], 2))[2:])
        n = n[3:]
        f *= -1
    else:
        s += str(hex(int(n[:4][::-1], 2))[2:])
        n = n[4:]
        f *= -1
print(s[::-1].upper())
