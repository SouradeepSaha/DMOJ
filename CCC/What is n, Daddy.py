a = int(input())

finger, sum= 0,0
for i in range(int(a/2)+1):
  finger  =a-i;
  if finger<=5 and i <= 5:
    sum +=1

print(sum)
