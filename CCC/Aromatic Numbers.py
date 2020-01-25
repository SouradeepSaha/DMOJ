val = {'I':1, 'V':5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000}

a = input()
sum = int(a[-2]) * val[a[-1]]

for i in range(1, len(a)-2, 2):
    if val[a[i]] < val[a[i+2]]:
        sum = sum - (val[a[i]]*int(a[i-1]))
    else:
        sum = sum + (val[a[i]]*int(a[i-1]))
print(sum)
