a = int(input())
b = int(input())
c = int(input())

m = a - 100 if a >= 100 else 0
n = a - 250 if a >= 250 else 0


d = m * 0.25 + b * 0.15 + c * 0.20
e =  n * 0.45 + b * 0.35 + c * 0.25

print(f'Plan A costs {d:.2f}', sep=' ')
print(f'Plan B costs {e:.2f}', sep=' ')

if abs(d-e) < 0.01:
    print('Plan A and B are the same price.')
elif d < e:
    print('Plan A is cheapest.')
elif d > e:
    print('Plan B is cheapest.')
