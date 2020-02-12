kase = int(input())
d, stat = {}, 'good'

p1 = list(input().split())
p2 = list(input().split())

for i in range(kase):
    if p1[i] not in d:
        d[p1[i]] = p2[i]
        d[p2[i]] = p1[i]
    if p1[i] in d and (d[p1[i]] != p2[i] or d[p1[i]] == p1[i]):
        stat='bad'
        break

print(stat)
