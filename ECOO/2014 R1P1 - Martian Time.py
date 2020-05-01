import time
for kase in range(10):
    earth_d, earth_h, earth_m = map(int, input().split())
    mars_s = ((earth_d-1)*3600*24 + earth_h*3600 + earth_m*60) * (86400/88642.663)
    print(f'Day {int((mars_s/86400)+1)}, {time.strftime("%H:%M", time.gmtime(mars_s))}')
