kase = int(input())
for i in range(kase):
    data = list(map(int, input().split()))
    ar, ge = True, True
    for j in range (0, 10, 2):
        if data[0] + data[j] != data[int(j/2)] * 2:
            ar = False
        if data[0] * data[j] != data[int(j/2)] * data[int(j/2)]:
            ge = False
    if ar and ge:
        print("both")
    elif ar:
        print("arithmetic")
    elif ge:
        print("geometric")
    else:
        print("neither")
