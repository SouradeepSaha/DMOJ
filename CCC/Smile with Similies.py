a = int(input())
b = int(input())

lst1, lst2 = [], []
for i in range(a):
    lst1.append(input())
for i in range(b):
    lst2.append(input())

for i in range(a):
    for j in range(b):
        print(lst1[i], 'as', lst2[j], sep=' ')
