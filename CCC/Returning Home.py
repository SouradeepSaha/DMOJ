go = input()
direction = []

while go != 'SCHOOL':
    if go == 'L':
        direction.insert(0, 'RIGHT')
    elif go == 'R':
        direction.insert(0, 'LEFT')
    else:
        direction.insert(0, go)
    go = input()

direction.append('HOME')
for ind in range(0, len(direction) - 1, 2):
    print('Turn', direction[ind], sep=' ', end=' ')
    if direction[ind + 1] != 'HOME':
        print('onto', direction[ind + 1], 'street', end='.\n')
    else:
        print('into your HOME.')
