for kase in range(5):
    ids = list(input().split())

    ans = ''
    for id in ids:
        sum = 0
        for i in id[int(not(len(id) % 2))::2]:
            t = str(int(i) * 2)
            if len(t) > 1:
                sum += int(t[0]) + int(t[1])
            else:
                sum += int(t)
        for i in id[len(id) % 2::2]:
            sum += int(i)
        ans += str((10 - (sum % 10))%10)
    print(ans)
