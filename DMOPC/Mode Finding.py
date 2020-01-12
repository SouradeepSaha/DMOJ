kase = int(input())
dict = {}
max = 0
data = list(map(int, input().split()))
for num in data:
    if num in dict:
        dict[num] += 1
    else:
        dict[num] = 1
    if dict[num] > max:
        max = dict[num]
lst = []
for k,v in dict.items():
    if dict[k] == max:
       lst.append(k)
lst.sort()
for m in lst:
    print(m, end = ' ')
