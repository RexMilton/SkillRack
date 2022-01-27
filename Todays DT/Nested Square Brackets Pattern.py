n = int(input())
for i in range(n):
    x, y = map(int, input().split())
    l = list(range(1, x*y+1))
    print('[', end='')
    while len(l) > y:
        print('[', end='')
        print(*l[:y], sep=' ', end='')
        print(']', end=' ')
        l = l[y:]
    print('[', end='')
    print(*l[:y], sep=' ', end='')
    print(']', end='')
    print(']')

#

for _ in range(int(input())):
    print(end="[")
    x, y = map(int, input().split())
    for i in range(1, x*y+1, y):
        print(end="["+" ".join(map(str, range(i, i+y)))+"]")
        if i+y < x*y+1:
            print(end=" ")
    print("]")
