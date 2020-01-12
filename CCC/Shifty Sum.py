a = int(input())
b = int(input())

sum = 0
for i in range(0,b+1):
    sum += a * (10 **i)
print(sum)
