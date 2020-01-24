a = int(input())
b = int(input())
sum=0

for i in range(1,10):
    if i <= a and 10-i <= b:
        sum += 1
        
if sum == 1:
    print("There is 1 way to get the sum 10.")
else:
    print("There are",sum,"ways to get the sum 10.", sep=' ')
