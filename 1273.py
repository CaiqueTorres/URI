# URI - 1273

from functools import reduce

primeiro = True

while True:
    amount = int(input())
    if amount == 0:
        break

    if primeiro:
        primeiro = False
    else:
        print()

    names = [str(input()).strip() for c in range(amount)]
    biggestLength = len(reduce(lambda acc, name: name if len(name) > len(acc) else acc, names))
    
    for name in names:
        print(name.rjust(biggestLength))
