import math


def main():
    n = input()
    m = input()
    a = input()

    if n%a == 0:
        N = n/a
    else:
        N = n/a
        N+=1
    if m%a == 0:
        M = m/a
    else:
        M = m/a
        M+=1
    print long(M*N)

if __name__ == "__main__":
    main()
