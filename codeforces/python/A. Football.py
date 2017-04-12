def main():
    raw = raw_input()
    NO = "NO"
    YES = "YES"
    danger = False
    counter = 0
    prev_char = " "
    for char in raw:
        if char == prev_char:
            counter+=1
            if counter >= 7 :
                danger = True
        else:
            counter = 1
        prev_char = char
    if danger:
        print YES
    else:
        print NO

if __name__ == '__main__':
    main()