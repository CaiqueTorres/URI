# URI - 1234

newString = list()
while True:
    try:
        string = str(input())

        is_upper = True
        newString.clear()
        
        for letter in string:
            if letter == " ":
                newString.append(letter)
                continue

            if is_upper:
                newString.append(letter.upper())
                is_upper = False
            else:
                newString.append(letter.lower())
                is_upper = True
        
        print("".join(newString))
    except EOFError:
        break
