moves = {54:19, 90:48, 99:77, 9:34, 40:64, 67:86}

cur = 1
dice = int(input())
while dice >= 2:
    cur = cur + dice if cur + dice <= 100 else cur
    cur = moves[cur] if cur in moves else cur
    print("You are now on square ", cur)
    if cur == 100:
        print("You Win!")
        break
    dice = int(input())
if not dice:
    print ("You Quit!")
