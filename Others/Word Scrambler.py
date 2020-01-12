from itertools import permutations
a =input()
perm = [''.join(p) for p in permutations(a)]
perm.sort()
for i in perm:
    print(i)
