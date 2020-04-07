import math, sys

row = int(input())
col = int(input())
grid = [[0] * col for i in range(row)]
vis = [[False] * col for j in range(row)]
fact = dict()

all_data = sys.stdin.read().split('\n')
for i in range(row):
    grid[i] = list(map(int, all_data[i].split()))

def find_factors(number):
    fact[number] = []
    for j in range(1, int(math.sqrt(number)) + 1):
        if number % j == 0:
            res = int(number / j)
            if j <= min(row, col) and res <= max(row, col):
                fact[number].extend([j, res])

def find():
    vis[0][0] = True
    q = [grid[0][0]]

    while len(q):
        cur = q.pop()

        if cur not in fact.keys():
            find_factors(cur)
        for num in fact[cur]:
            r, c = num - 1, int(cur / num) - 1
            if r == row - 1 and c == col - 1:
                return True

            if r < row and c < col and not vis[r][c]:
                vis[r][c] = True
                q.append(grid[r][c])
    return False

if find():
    print('yes')
else:
    print('no')
