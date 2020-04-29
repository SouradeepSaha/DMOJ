N, D = map(int, input().split())
D = abs(D)
intervals = list(map(int, input().split()))
intervals.sort(reverse=True)

ans = 'This is not the best time for a trip.'
for i in intervals:
    if not D % i:
        ans = int(D/i)
        break
print(ans)
