verse, poem, vowel = int(input()), [], ['a', 'e', 'i', 'o', 'u', ' ']

for i in range(4*verse):
    line = input().lower()
    for ind in range(len(line)):
        rev = ''.join(reversed(line))
        if rev[ind] in vowel or ind == len(line)-1:
            poem.append(rev[:ind+1])
            break

for i in range(0, 4*verse, 4):
    if len(set(poem[i:i+4])) == 1:
        print('perfect')
    elif poem[i] == poem[i+2] and poem[i+1] == poem[i+3]:
        print('cross')
    elif poem[i] == poem[i+1] and poem[i+2] == poem[i+3]:
        print('even')
    elif poem[i] == poem[i+3] and poem[i+1] == poem[i+2]:
        print('shell')
    else:
        print('free')

