def main():
    line_input = str(raw_input())
    line_input = line_input.split(" ")
    n = int(line_input[0])
    k = int(line_input[1])
    half = n / 2
    if n % 2 != 0:
        half += 1
    if k > half :
        i = k-half
        number  = i*2
    else:
        number = (k*2)-1
    print number


if __name__ == '__main__':
    main()
