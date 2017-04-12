yes = "YES"
no = "NO"


def main():
    w = int(input())
    if w % 2 != 0 or w == 0:
        print no
        return

    other_number = 1
    for x in range(2, w-1, 2):
        other_number = w - x
        if other_number%2 == 0:
            print yes
            return
    print no
    return

if __name__ == "__main__":
    main()