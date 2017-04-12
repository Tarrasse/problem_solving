def main():
    list = ["", "Sheldon", "Leonard", "Penny", "Rajesh", "Howard"]
    n = int(input())
    if n <= 5:
        print list[n]
        return

    i = 0
    old_sum = 0
    sum = 0

    while sum <= n:
        old_sum = sum
        sum += (5 * (2 ** i))
        i += 1
    i-=1
    sum = old_sum
    diff = n - sum

    if diff % 2**i == 0:
        diff /= 2**i
    else:
        diff /= 2**i
        diff += 1

    print list[int(diff)]


if __name__ == '__main__':
    main()
