s = input()
ha = s.count(':-)')
sa = s.count(':-(')
if not ha and not sa:
	print('none')
elif ha == sa:
	print('unsure')
elif  ha > sa:
	print('happy')
elif ha < sa:
	print('sad')
