b=[]
max, sum=0,0
sum2=0
for i in range(8):
    b.append(int(input()))

for i in b:
    sum2 += i
for i in range(5):
    sum=0
    for j in range(4):
        sum+= b[i+j] 
    if sum>=max:
        max=sum
    
    elif sum2-sum >= max:
        max=sum2-sum

print(max)
