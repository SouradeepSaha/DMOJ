k = int(input())
word = input()
for i in range(len(word)):
    char = word[i]
    shift = ord(char) - (3*(i+1) + k)
    ch = chr(shift) if shift > 64 else chr(shift+26)
    print(ch, end='')
