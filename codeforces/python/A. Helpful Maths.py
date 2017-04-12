def main():
    x = str(raw_input())
    z = x.split("+")
    numbers = []
    for char in z:
        numbers.append(char)
    numbers.sort()
    a = "+"
    print a.join(numbers)

if __name__ == '__main__':
    import profile
    profile.run("main()")