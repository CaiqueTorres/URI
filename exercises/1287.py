# URI - 1287

def validate_number(letter: str) -> str:
    if letter == "o" or letter == "O":
        return "0"
    if letter == "l":
        return "1"
    if letter == " " or letter == ",":
        return ""
    return letter

while True:
    try:
        number = str(input())
        newNumber = int("".join([validate_number(letter) for letter in number]))
        if newNumber > 2147483647:
            raise ValueError

        print(newNumber)

    except EOFError:
        break
    except ValueError:
        print("error")
