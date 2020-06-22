d = dict()

while True:
    try:
        string = input()
        for letter in string:
            value = ord(letter)
            if not value in d:
                d[value] = 1
            else:
                d[value] += 1

        
        for key, value in sorted(d.items(), key=lambda item: item[1]):
            print(key, value)
        d.clear()
        print()
    except EOFError:
        break
