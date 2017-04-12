def solve(word):
    if len(word) > 10:
        first_letter = word[0]
        last_letter = word[len(word) - 1]
        number = str(len(word) - 2)
        return str(first_letter) + number + str(last_letter)
    else:
        return word


def main():
    length = int(input())
    l = []
    for n in range(0, length):
        word = raw_input()
        l.append(do_staff(word))
    for n in l:
        print n


if __name__ == '__main__':
    main()
