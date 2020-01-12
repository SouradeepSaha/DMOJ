import math

min = int(input())
seq = [1234]
for i in range(1, 10):
    for j in range(0, 10):
        mid = (i+j)/2
        if mid.is_integer() and mid < 6:
            seq.append((i+12)*100+(i+j)*5+j)

seq.append(2311)
ans = math.floor(min/720) * len(seq)
tot = min%720
fin = (12+math.floor(tot/60)) * 100 + tot%60
for time in seq:
    if time <= fin:
        ans += 1
print(ans)
