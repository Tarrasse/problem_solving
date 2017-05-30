def main():
    n = input()
    length = 0
    words = {}
    for i in range(n):
        char = {}
        string = str(raw_input())
        for c in string:
            if c not in char:
                char[c] = 1
            else:
                char[c] += 1

        if len(char) <= 2:
            words[i] = char

    print length


if __name__ == '__main__':
    main()
