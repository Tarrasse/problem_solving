import math

R = 0
L = 0
r = []
l = []

n = int(input())
for i in range(n):
    temp = str(raw_input())
    temp_l = int(temp.split(" ")[0])
    temp_r = int(temp.split(" ")[1])
    R += temp_r
    L += temp_l
    r.append(temp_r)
    l.append(temp_l)

min_index = n + 1

beuty = math.fabs(L - R)

for i in range(n):
    temp_R = R - r[i] + l[i]
    temp_L = L - l[i] + r[i]

    temp_beuty = math.fabs(temp_L - temp_R)
    if temp_beuty > beuty:
        min_index = i + 1
        beuty = temp_beuty

if beuty == math.fabs(L - R):
    print 0
else:
    print min_index
