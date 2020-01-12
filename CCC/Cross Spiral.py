#  sys.stdin=open("data.txt","r")
def change(cur_row: int, cur_col: int, cmd: str) -> bool:
    if not grid[cur_row + go[cmd][0]][cur_col + go[cmd][1]] or grid[cur_row + check[cmd][0]][cur_col + check[cmd][1]]:
        return True
    return False


inp = []  # 0: length, 1: height, 2: corner length, 3: corner height, 4: steps
for i in range(5):
    inp.append(int(input()))

com = ['R', 'D', 'R', 'D', 'L', 'D', 'L', 'U', 'L', 'U', 'R', 'U']
go = {'R': [0, 1], 'L': [0, -1], 'U': [-1, 0], 'D': [1, 0]}
check = {'R': [-1, 0], 'L': [1, 0], 'U': [0, -1], 'D': [0, 1]}
grid = [[1] * (inp[0] + 2) for i in range(inp[1] + 2)]

for i in range(1, inp[1] + 1):
    for j in range(1, inp[0] + 1):
        if 1 <= i <= inp[3] or inp[1] - inp[3] < i <= inp[1]:
            if 1 <= j <= inp[2] or inp[0] - inp[2] < j <= inp[0]:
                grid[i][j] = 0
grid[0], grid[-1] = [0 for item in grid[0]], [0 for item in grid[-1]]
for arr in grid:
    arr[0], arr[-1] = 0, 0

row, column, step, com_ind = 1, inp[2] + 1, 0, 0
while step != inp[4]:
    cur_com = com[com_ind]
    if not (grid[row - 1][column] or grid[row][column + 1] or grid[row + 1][column] or grid[row][column - 1]):
        break
    if not change(row, column, cur_com):
        grid[row][column] = 0
        row, column = row + go[cur_com][0], column + go[cur_com][1]
        step += 1
    else:
        com_ind += 1
        com_ind = 0 if com_ind == len(com) else com_ind
        cur_com = com[com_ind]
        grid[row][column] = 0
        row, column = row + go[cur_com][0], column + go[cur_com][1]
        step += 1

print(column, row, sep='\n')
