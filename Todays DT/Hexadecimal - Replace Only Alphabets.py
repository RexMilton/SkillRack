n = int(input())
l = input().split()
d = {"A": "10", "B": "11", "C": "12", "D": "13", "E": "14", "F": "15"}
c = 0
for i in l:
    x = ""
    for j in i:
        if j.isalpha():
            x += d.get(j)
        else:
            x += j
    c += int(x)
print(c)
