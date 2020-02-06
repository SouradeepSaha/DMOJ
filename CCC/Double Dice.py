a = int(input())
e, f = 100, 100
for i in range(a):
    b, c = map(int, input().split())
    if b < c:
        e -= c
    elif b > c:
        f -= b

print(e, f, sep='\n')
