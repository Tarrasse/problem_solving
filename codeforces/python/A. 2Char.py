def main():
    n = input()
    length = 0
    for i in range(0, n):
        char = {}
        string = str(raw_input())
        for c in string:
            char[c] = 1
        if len(char) <= 2:
            length += len(string)
    print length


if __name__ == '__main__':
    main()
