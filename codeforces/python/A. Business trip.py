# algorithm: https://en.wikipedia.org/wiki/Cyclic_redundancy_check
# www.computing.dcu.ie/~humphrys/Notes/Networks/data.polynomial.html


def crc(msg, div, code=None):
    if code is None:
        code = ['0' for i in range(len(div) - 1)]
    code = ''.join(code)
    msg += code
    msg = list(msg)
    div = list(div)
    for i in range(len(msg) - len(code)):
        if msg[i] == '1':
            for j in range(len(div)):
                msg[i + j] = XOR(msg[i + j], div[j])
    return ''.join(msg[-len(code):])


def XOR(a, b):
    if a is b:
        return '0'
    else:
        return '1'


def main():
    message = raw_input()
    divisor = raw_input()

    if (divisor[0] is not '1') \
        or (divisor[len(divisor) - 1] is not '1') \
            or (len(message) < len(divisor)) \
            or ('1' not in message) :
        print '-1'
        return

    remainder = crc(message, divisor)
    if (len(remainder) != len(divisor) -1):
        print '-1'
        return
    print message + remainder


if __name__ == '__main__':
    main()
