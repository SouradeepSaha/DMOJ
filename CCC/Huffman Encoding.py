k = int(input())
store = {}
for i in range(k):
    k, v = input().split()
    store[v] = k

text = input()

start, ans = 0, ''
for stop in range(1, len(text)+1):
    word = text[start:stop]
    if word in store.keys():
        ans += store[word]
        start = stop

print(ans)
