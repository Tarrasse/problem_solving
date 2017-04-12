def main():
    number_of_groups = input()
    groups_list = get_groups_list()
    freq = [0, 0, 0, 0]
    for n in groups_list:
        freq[n - 1] += 1
    taxis = freq[3]

    if freq[2] >= freq[0]:
        freq[0] = 0
        taxis += freq[2]
        if freq[1] % 2 == 0:
            taxis += freq[1] / 2
        else:
            taxis += freq[1] / 2
            taxis += 1
    else:
        taxis += freq[2]
        freq[0] -= freq[2]
        if freq[1] % 2 == 0:
            taxis += freq[1] / 2
            if freq[0] % 4 == 0:
                taxis += freq[0] / 4
            else:
                taxis += freq[0] / 4
                taxis += 1
        else:
            taxis += freq[1] / 2
            if freq[0] % 4 == 0:
                taxis += freq[0] / 4
                taxis += 1
            else:
                taxis += freq[0] / 4
                if ((freq[0] % 4) + 2) > 4:
                    taxis += 2
                else:
                    taxis += 1
    print taxis


def get_groups_list():
    x = str(raw_input())
    if x[len(x) - 1] == " ":
        x = x[:len(x) - 2]
    y = x.split(" ")
    z = []
    for x in y:
        z.append(int(x))
    return z


if __name__ == '__main__':
    main()
