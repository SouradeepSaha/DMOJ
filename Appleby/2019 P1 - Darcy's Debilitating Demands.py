kase = int(input())

for i in range(kase):
    n, a, b, c = int(input()), int(input()), int(input()), int(input())
    if c >= n:
        print(f'{0} {0} {n}')
    elif b+c >= n:
        print(f'{0} {n-c} {c}')
    elif a+b+c >= n:
        print(f'{n-b-c} {b} {c}')
    else:
        print('-1')
