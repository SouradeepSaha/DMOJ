from collections import deque

graph={ 1: [6], 2: [6], 3: [4, 5, 6, 15], 4: [3, 5, 6], 5: [3, 4, 6], 6: [1, 2, 3, 4, 5, 7],
        7: [6, 8], 8: [7, 9], 9: [8, 10, 12], 10: [9, 11], 11: [10, 12], 12: [9, 11, 13],
        13: [12, 14, 15], 14: [13], 15:[3,13], 16:[17,18], 17:[16,18], 18:[16,17] }

com = []
t = input()
while t != 'q':
    if t < 'a':
        t = int(t)
    com.append(t)
    t = input()


def bfs(start: int, end: int):
    q = deque()
    vis[start] = True
    q.append(start)
    while q:
        cur = q.popleft()
        for item in graph[cur]:
            if not vis[item]:
                vis[item] = True
                dist[item] = dist[cur] + 1
                q.append(item)
    if end not in vis.keys() or not vis[end]:
        return 'Not connected'
    else:
        return dist[end]

vis, dist = {k: False for k in range(19)}, {k: 0 for k in range(19)}
for m in range(len(com)):
    ch = com[m]
    if ch == 'i':
        graph.setdefault(com[m+1], [])
        graph.setdefault(com[m+2], [])
        vis.setdefault(com[m+1], False)
        vis.setdefault(com[m+2], False)
        dist.setdefault(com[m+2], 0)
        dist.setdefault(com[m+1], 0)
        if com[m+2] not in graph[com[m+1]]:
            graph[com[m+1]].append(com[m+2])
            graph[com[m+2]].append(com[m+1])

    elif ch == 'd':
        graph[com[m+1]].remove(com[m+2])
        graph[com[m+2]].remove(com[m+1])

    elif ch == 'n':
        print(len(graph[com[m+1]]))
    elif ch == 'f':
        s1, s2 = {com[m+1]}, set()
        for friend in graph[com[m+1]]:
            s1.add(friend)
            for f2 in graph[friend]:
                s2.add(f2)
        print(len(s2)-len(set(s1&s2)))
    elif ch == 's':
        vis, dist = {k: False for k in vis}, {k: 0 for k in dist}
        print(bfs(com[m+1], com[m+2]))
