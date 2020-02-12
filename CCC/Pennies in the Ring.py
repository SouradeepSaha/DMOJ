import math
r = int(input())
while r:
    sum = 0
    r2 = r * r
    for i in range(1, r+1):
        sum += int(math.sqrt(r2-(i*i))+1)
    sum = sum * 4 + 1
    print(int(sum))
    r = int(input())
