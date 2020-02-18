c, r = map(int, input().split())
x, y = map(int, input().split())

cur_x, cur_y = 0, 0
while x or y:
    cur_x += x
    cur_y += y
    cur_x = c if cur_x > c else cur_x
    cur_y = r if cur_y > r else cur_y
    cur_x = 0 if cur_x < 0 else cur_x
    cur_y = 0 if cur_y < 0 else cur_y
    print(cur_x, cur_y)
    x, y = map(int, input().split())
