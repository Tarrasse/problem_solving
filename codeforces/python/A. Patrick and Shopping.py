def main():
    d = str(raw_input())
    l = d.split()
    for i in range(len(l)):
        l[i] = int(l[i])
    l.sort()
    if l[2] > (l[0] + l[1]):
        print str(2 * (l[0] + l[1]))
    else:
        print str(l[0] + l[1] + l[2])


if __name__ == '__main__':
    main()