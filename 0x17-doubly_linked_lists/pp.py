#!/usr/bin/python3
def pal(s):
    l = len(s)
    for i in range(int(l / 2)):
        if s[i] != s[l - i - 1]:
            return 0
    return 1
maxx = 0
for x in range(100, 1000):
    for y in range(100, 1000):
        if pal(str(x*y)):
            if x*y > maxx:
                maxx = x*y
print(maxx)
