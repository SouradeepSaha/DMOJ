import math

for i in range(5):
    px, py = map(int, input().split())
    if py:
        a = (pow(px, 2) / pow(py, 2)) + 1
        b = (px + (pow(px, 3) / pow(py, 2))) * -1
        c = (-0.75 * pow(py, 2)) - (0.5 * pow(px, 2)) + (0.25 * (pow(px, 4) / pow(py, 2)))
        x = (-b + math.sqrt((b * b) - (4 * a * c))) / (2 * a)
        xm = (-b - math.sqrt(pow(b, 2) - (4 * a * c))) / (2 * a)
        if py < 0:
            x, xm = xm, x
        y = 0.5 * py + (0.5 * (pow(px, 2) / py)) - (px * x / py)
        ym = 0.5 * py + (0.5 * (pow(px, 2) / py)) - (px * xm / py)
        x2 = -1 * x
        y2 = -1 * y
        x3 = (2 * xm) - x2
        y3 = (2 * ym) - y2
    else:
        x = 0.5 * px
        y = (math.sqrt(3)/2) * px * (-1)
        x2 = px + (0.5 * px)
        x3 = 0 - (0.5 * px)
        y2 = -1 * y
        y3 = y2

    print('(', round(x, 1), ',', round(y, 1), ') ', end='', sep='')
    print('(', round(x2, 1), ',', round(y2, 1), ') ', end='', sep='')
    print('(', round(x3, 1), ',', round(y3, 1), ')', sep='')
