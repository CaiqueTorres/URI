# URI - 1278

from functools import reduce

primeiro = True

def remove_white_spaces(string: str) -> str:
    return " ".join(string.split())

while True:
    amount = int(input())
    if amount == 0:
        break

    if primeiro:
        primeiro = False
    else:
        print()

    names = [remove_white_spaces(str(input()).strip()) for c in range(amount)]
    biggestLength = len(reduce(lambda acc, name: name if len(name) > len(acc) else acc, names))
    
    for name in names:
        print(name.rjust(biggestLength))
