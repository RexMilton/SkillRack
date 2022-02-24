n = input().strip()
n = n.count("1")
print(n, end=" ")
while n > 1:
    n = bin(n)[2:].count("1")
    print(n, end=" ")
