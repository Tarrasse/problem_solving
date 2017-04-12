def main():
    string = str(raw_input())
    l = string.split(" ")
    n = int(l[0])
    k = int(l[1])
    divisors = []
    for divisor in range(1, n + 1):
        if n % divisor == 0:
            divisors.append(divisor)

    if len(divisors) < k:
        print "-1"
    else:
        print divisors[k-1]

if __name__ == '__main__':
    main()