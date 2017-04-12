def main():
    input = str(raw_input())
    list = input.split(" ")
    beds_number = int(list[0])
    pillows_number = int(list[1])
    if beds_number == pillows_number:
        print 1
        return
    if beds_number == 1:
        print pillows_number
        return

    main_bed_index = int(list[2])
    main_bed_index -= 1

    left_size = main_bed_index
    right_size = beds_number - 1 - main_bed_index
    print "left-size = " + str(left_size)
    print "right-size= " + str(right_size)

    if right_size > left_size:
        right_size += 1
        extra_height = right_size
    else:
        left_size += 1
        extra_height = left_size

    left_top = (left_size * (left_size + 1)) / 2
    print "left-top = " + str(left_top)
    right_top = (right_size * (right_size + 1)) / 2
    print "right-top = " + str(right_top)

    total_top = left_top + right_top

    pillows_number -= total_top

    levels = pillows_number / beds_number

    print levels + extra_height



if __name__ == '__main__':
    main()
