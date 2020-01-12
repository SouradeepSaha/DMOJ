import math

a = int(input())
b = int(input())
c = 0
for i in range(a, b+1):
    div=0
    for j in range(1, i+1):
        if not (i % j):
            div+= 1
            
    if div == 4:
        c +=1
print('The number of RSA numbers between', a, 'and', b, 'is', c, sep=' ')
