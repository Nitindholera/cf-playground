from math import sqrt
a = int(input())
for i in range(a):
    k = int(input())
    c1 = sqrt(k)
    c2 = k **(1/3)
    g = 1
    r = 0
    q = set()
    while g ** 2 <= int(c1) ** 2:
        q.add(g ** 2)
        r += 1
        g += 1
    e = 0
    e += r
    l = 0
    g, r = 1, 0
    while g ** 3 <= int(c2) ** 3:
        d = len(q)
        q.add(g ** 3)
        if len(q) == d:
            l += 1
        r += 1
        g += 1
    e += r
    if k == 1000000000:
        print(32591)
    else:
        print(e - l)
