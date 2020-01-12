pie = int(input())
people = int(input())

ways = [[-1 for x in range(pie+1)] for y in range(people+1)]

def dp (person, piece): # using bottom up approach
    if not person or person > piece:
        return 0
    if person == 1 or person == piece:
        return 1
    if ways[person][piece] != -1: #use this otherwise you will not use memoization
        return ways[person][piece]

    ways[person][piece] = dp(person-1, piece-1) + dp(person, piece-person)
    return ways[person][piece]

"""
using top-down approach
for person in range(0, people+1):
    for piece in range(0, pie+1):
        if not person or person > piece:
            ways[person][piece] = 0
        elif person == 1 or person == piece:
            ways[person][piece] = 1
        else:
            ways[person][piece] = ways[person-1][piece-1] + ways[person][piece-person]

"""
print(dp(people, pie))
