code = input()
sen = input()
sen = [char for char in sen if 'A' <= char <= 'Z']
for i in range(len(sen)):
	shift = ord(code[i%len(code)]) - ord('A') + ord(sen[i])
	sen[i] = chr(shift) if shift < 91 else chr(shift-26)
print (''.join(sen))
