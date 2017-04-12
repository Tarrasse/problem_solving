global_list = []


def check_item(beds_freq, index, max_index):
    if index != 0 \
            and index != max_index \
            and beds_freq[index] > beds_freq[index - 1] \
            and beds_freq[index] > beds_freq[index + 1]:

        check_item_left(beds_freq, index - 1, max_index)
        check_item_right(beds_freq, index + 1, max_index)

    elif index != 0 \
            and beds_freq[index] > beds_freq[index - 1]:

        check_item_left(beds_freq, index - 1, max_index)

    elif index != max_index \
            and beds_freq[index] > beds_freq[index + 1]:

        check_item_right(beds_freq, index + 1, max_index)

    global_list.append(index)


def check_item_left(beds_freq, index, max_index):
    if index == max_index or index == 0:
        global_list.append(index)
        return
    if beds_freq[index] > beds_freq[index - 1]:
        check_item_left(beds_freq, index - 1, max_index)

    global_list.append(index)


def check_item_right(beds_freq, index, max_index):
    if index == max_index or index == 0:
        global_list.append(index)
        return

    if beds_freq[index] > beds_freq[index + 1]:
        check_item_right(beds_freq, index + 1, max_index)
    global_list.append(index)


def main():
    input = str(raw_input())
    list = input.split(" ")

    beds_number = int(list[0])
    billows_number = int(list[1])
    main_bed = int(list[2])
    if beds_number == 1:
        print billows_number
        return
    main_bed -= 1


    beds_frequency = [1] * beds_number
    billows_number -= beds_number
    global global_list
    while billows_number > 0:
        check_item(beds_frequency, main_bed, beds_number - 1)
        if len(global_list) <= billows_number:
            billows_number -= len(global_list)
            for i in global_list:
                beds_frequency[i] += 1
            global_list = []
        else:
            billows_number = 0

    print beds_frequency[main_bed]


if __name__ == '__main__':
    main()