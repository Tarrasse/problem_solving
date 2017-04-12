def main():
    n = input()
    x = 0
    for i in range(0, n):
        str = raw_input()
        if str[0] == "X":
            if str[1:] == "--":
                x-=1
            elif str[1:] == "++":
                x+=1
        else:
            if str[:2] == "--":
                x-=1
            elif str[:2] == "++":
                x+=1
    print x


if __name__ == '__main__':
    main()