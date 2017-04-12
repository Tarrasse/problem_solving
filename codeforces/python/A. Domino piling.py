def main():
    str1 = str(raw_input())
    counter = 0
    for char in str1:
        if not char.isspace():
            counter += 1
        else:
            break
    n = int(str1[:counter])
    m = int(str1[counter + 1:])
    k = n * m
    k = k/2
    print k

if __name__ == '__main__':
    main()