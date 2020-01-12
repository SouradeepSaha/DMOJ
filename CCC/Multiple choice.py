num = int(input())
inp = []
cor = 0
for i in range(num*2):
	inp.append(input())
for i in range(num):
	if inp[i] == inp[i+num]:
		cor += 1
print(cor)
