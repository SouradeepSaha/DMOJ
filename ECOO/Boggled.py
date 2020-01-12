def found(word: str, ind: int, row: int, col: int) -> bool:
    if ind == len(word):
        return True
    for a in mat:
        for b in mat:
            if (a or b) and 0 <= row+a <= 3 and 0 <= col+b <= 3:
                if not vis[row+a][col+b] and board[row+a][col+b] == word[ind]:
                    vis[row + a][col + b] = True
                    if found(word, ind+1, row+a, col+b):
                        return True
                    vis[row+a][col+b] = False
    return False


mat = [-1, 0, 1]
scoreval = {3: 1, 4: 1, 5: 2, 6: 3, 7: 4}
for i in range(8, 20):
    scoreval[i] = 11
for kase in range(5):
    score, short, rep, nf, good, lst, board = 0, 0, 0, 0, 0, [], []

    for i in range(4):
        board.append(input())
    num = int(input())
    for i in range(num):
        temp = input()
        if len(temp) <= 2:
            short += 1
        elif temp in lst:
            rep += 1
        else:
            lst.append(temp)

    for w in lst:
        stat = False
        vis = [[False] * 4 for i in range(4)]
        for i in range(4):
            for j in range(4):
                if board[i][j] == w[0]:
                    vis[i][j] = True
                    stat = found(w, 1, i, j)
                    vis[i][j] = False
                if stat:
                    break
            if stat:
                break
        if stat:
            good += 1
            score += scoreval[len(w)]
        else:
            nf += 1
    print('Your score: ', score, ' (', good, ' good, ', nf, ' not found, ', short, ' too short, ', rep, ' repeated)',
          sep='')
