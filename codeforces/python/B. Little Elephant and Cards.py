def main():
    any()
    n = int(input())
    freq = {}
    front_frequency = {}
    for i in range(0, n):
        string = str(raw_input())
        l = string.split(" ")
        front = int(l[0])
        back = int(l[1])
        if freq.__contains__(front):
            freq[front] += 1
        else:
            freq[front] = 1
        if freq.__contains__(back):
            freq[back] += 1
        else:
            freq[back] = 1
        if front_frequency.__contains__(front):
            front_frequency[front] += 1
        else:
            front_frequency[front] = 1
    half = n/2
    min = 10000000
    for n in freq:
        if freq[n] > half:
            diff = half - front_frequency[n]
            if diff < min:
                min = diff
    print min


if __name__ == '__main__':
    import profile
    profile.run("main()")
