letters = ['I', 'O', 'S', 'H', 'Z', 'X', 'N']
a = input()
code=False

for l in a:
    if l not in letters:
        code=True

if code:
    print('NO')
else:
    print('YES')
