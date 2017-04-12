def main():
    inp = str(raw_input())
    input_list = inp.split(" ")
    k = int(input_list[0])
    n = int(input_list[1])
    w = int(input_list[2])
    total_cost = k * ((w *(w + 1))/2)
    borrow  = total_cost - n
    if borrow >= 0:
        print borrow
    else:
        print 0
if __name__ == '__main__':
    main()