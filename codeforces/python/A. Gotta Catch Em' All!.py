def main():
    string = str(raw_input())
    s = "Bulbasaur"
    freq = {}
    for l in s:
        freq[l] = 0

    for letter in string:
        if letter in freq.keys():
            freq[letter]+=1
    freq["u"]/=2
    freq["a"]/=2
    values = freq.values()
    print min(values)

if __name__ == '__main__':
    main()