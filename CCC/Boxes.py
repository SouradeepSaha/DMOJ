box = int(input())
size = []
for i in range(box):
    temp = sorted(list(map(int, input().split())))
    size.append(temp)

item = int(input())
for i in range(item):
    least = 9999999999
    temp = sorted(list(map(int, input().split())))
    cur_vol = temp[0] * temp[1] * temp[2]

    for lst in size:
        lst_vol = lst[0] * lst[1] * lst[2]
        if cur_vol <= lst_vol < least:
            if temp[0] <= lst[0] and temp[1] <= lst[1] and temp[2] <= lst[2]:
                least = lst_vol

    if least == 9999999999:
        print('Item does not fit.')
    else:
        print(least)
