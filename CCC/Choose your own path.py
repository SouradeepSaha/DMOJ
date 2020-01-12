from collections import deque

pages = int(input())
graph, q, vis, dist = {}, deque(), [False for i in range(pages+1)], [0 for j in range(pages+1)]
low = 10000
for i in range(1, pages+1):
    graph[i] = list(map(int, input().split()))
    edge = graph[i].pop(0)

q.append(1)
dist[1], vis[1] = 1, True
while q:
    cur = q.popleft()
    for item in graph[cur]:
        if not vis[item]:
            vis[item] = True
            dist[item] = dist[cur] + 1
            q.append(item)
    if len(graph[cur]) == 0 and dist[cur] < low:
        low = dist[cur]
code = 'Y'
for item in vis[1:]:
    if not item:
        code = 'N'
        break
print(code)
print(low)
