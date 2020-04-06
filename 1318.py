# URI - 1318.py

while True:
    str1, str2 = input().split()
    n1, n2 = int(str1), int(str2)

    if n1 == 0 and n2 == 0:
        break

    a = input().split()
    d = {i: a.count(i) for i in a}

    nonRepeated = sum(value != 1 for value in d.values())
    print(nonRepeated)
