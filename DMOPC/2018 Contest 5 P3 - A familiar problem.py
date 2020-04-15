kase, M = map(int, input().split())
c = list(map(int, input().split()))

LP, RP, best, Sum = 0, 0, 0 , 0
while RP < kase:
    Sum += c[RP]
    if Sum >= M:
        while Sum >= M:
            Sum -= c[LP]
            LP += 1

    if RP+1-LP > best:
        best = RP+1-LP
    RP += 1

print(best)
