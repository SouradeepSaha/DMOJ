w = int(input())
cars = int(input())
lst, sum1, ans, b = [], 0, 0, False
for i in range(cars):
    lst.append(int(input()))
    sum1 += lst[i]
    if i > 3:
        sum1 -= lst[i-4]
    if sum1 <= w and not b:
        ans += 1
    else:
        b = True

print(ans)
