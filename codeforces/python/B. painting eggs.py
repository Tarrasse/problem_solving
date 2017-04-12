import sys


n = int(raw_input())
error = 0
while n > 0:
    raw = raw_input().split()
    raw[0] = int(raw[0])
    raw[1] = int(raw[1])
    if error + raw[0] <= 500:
        error += raw[0]
        sys.stdout.write("A")
    else:
        error -= raw[1]
        sys.stdout.write("G")
    n -= 1
