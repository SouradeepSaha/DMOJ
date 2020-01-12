a = input()

c = True if 'True' in a else False
d = a.count('not')

if d % 2:
    print(not c)
else:
    print(c)
