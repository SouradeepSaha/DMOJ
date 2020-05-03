kase = int(input())
for i in range(kase):
    stores = int(input())
    buy_list = {}
    inv = {}
    for j in range(stores):
        items = int(input())
        for k in range(items):
            t = list(input().split())
            if t[0] not in inv:
                inv[t[0]] = [[], {}]
            if int(t[1]) in inv[t[0]][1].keys():
                inv[t[0]][1][int(t[1])] += int(t[2])
            else:
                inv[t[0]][0].append(int(t[1]))
                inv[t[0]][1][int(t[1])] = int(t[2])


    buy_num = int(input())
    sum = 0
    for j in range(buy_num):
        t = list(input().split())
        t[1] = int(t[1])
        rem = t[1]
        inv[t[0]][0].sort()
        for cost in inv[t[0]][0]:
            available = inv[t[0]][1][cost]
            if available >= rem:
                sum += rem * cost
                rem = 0
                break
            else:
                rem -= available
                sum += available * cost
    print(sum)
