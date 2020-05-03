notes = 'C C# D D# E F F# G G# A A# B'
notes = list(notes.split())


def check_root(st):
    if abs(notes.index(st[0]) - notes.index(st[1])) == 4 or abs(notes.index(st[0]) - notes.index(st[1])) == 8:
        if abs (notes.index(st[1]) - notes.index(st[2])) == 3 or abs (notes.index(st[1]) - notes.index(st[2])) == 9:
            if abs (notes.index(st[2]) - notes.index(st[3])) == 9 or abs (notes.index(st[2]) - notes.index(st[3])) == 3:
                return True
    return False

kase = int(input())
for i in range(kase):
    s = list(input().split())

    ans = 'invalid'
    if check_root(s):
        ans = 'root'
    elif check_root(s[1::] + s[0:1]):
        ans = 'third'
    elif check_root(s[3:4]+ s[:-1:]):
        ans = 'first'
    elif check_root(s[2::]+s[0:2]):
        ans = 'second'
    print(ans)
