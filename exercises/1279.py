# URI - 1279

first = True

def define_year(year: int):
    festival = False
    leapYear = False

    global first
    if not first:
        print()

    first = False

    if (year % 4 == 0 and not year % 100 == 0) or (year % 400 == 0):
        festival = True
        leapYear = True
        yield 'This is leap year.'
    if year % 15 == 0:
        festival = True
        yield 'This is huluculu festival year.'
    if year % 55 == 0 and leapYear:
        festival = True
        yield 'This is bulukulu festival year.'

    if not festival:
        yield 'This is an ordinary year.'

years = list()
while True:
    try:
        years.append(int(input()))
    except EOFError:
        break

for y in years:
    print(*define_year(y), sep='\n')
