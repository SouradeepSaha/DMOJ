burger = {1: 461, 2: 431, 3: 420, 4: 0}
drink = {1: 130, 2: 160, 3: 118, 4: 0}
side = {1: 100, 2: 57, 3: 70, 4: 0}
dessert = {1: 167, 2: 266, 3: 75, 4: 0}


b = int(input())
s = int(input())
d = int(input())
de = int(input())

print('Your total Calorie count is ', burger[b]+drink[d]+side[s]+dessert[de], '.', sep='')
