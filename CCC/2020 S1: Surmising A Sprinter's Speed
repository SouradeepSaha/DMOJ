kase = int(input())
time, dict = [], {}

for i in range(kase):
    t, d = map(int, input().split())
    time.append(t)
    dict[t] = d

time.sort()
v_max = 0
for i in range(kase-1):
    v = abs((dict[time[i]] - dict[time[i+1]]) / (time[i] - time[i+1]))
    if v > v_max:
        v_max = v

print(v_max)
