a='bcdfghjklmnpqrstvwxz'
t = input()
while t != 'quit!':
	if len(t) > 4:
		for let in a:
			if let+'or' in t and t.find(let+'or') == len(t)-3:
				t = t.replace(let+'or', let+'our')
				break
	
	print(t)
	t = input()
