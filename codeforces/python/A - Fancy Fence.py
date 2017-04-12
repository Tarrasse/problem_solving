def check(a):
    b = (1.0 / (0.5 - (a / 360.0)))
    print b
    return b == int(b)


n = int(raw_input())
for i in range(n):
    a = int(raw_input())
    c = check(a)
    print c
    if c:
        print "YES"
    else:
        print "NO"
