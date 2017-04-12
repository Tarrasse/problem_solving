def main():
    total_number = 0
    str1 = str(raw_input())
    counter = 0
    for char in str1:
        if not char.isspace():
            counter += 1
        else:
            break
    k = int(str1[counter + 1:])
    str2 = str(raw_input())
    if not str2[len(str2) - 1].isspace():
        str2 += " "

    counter = 0
    last_time = 0
    l = []
    for char in str2:
        if not char.isspace():
            counter += 1
        else:
            number = int(str2[last_time:(last_time + counter)])
            last_time = last_time + counter + 1
            counter = 0
            l.append(number)
    max = l[k - 1]
    for number in l:
        if number >= max and number > 0:
            total_number += 1
    print total_number


if __name__ == '__main__':
    main()
