# URI - 1120

while True:
    number, otherNumber = input().split()

    if number == "0" and otherNumber == "0":
        break

    string = "".join([letter for letter in otherNumber if letter != number])
    if (len(string) != 0):
        print(int(string))
    else:
        print(0)
