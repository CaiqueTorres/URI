# URI - 1055 - ainda não finalizado

from itertools import permutations
from functools import reduce

def soma1055(numbers: tuple) -> int:
    sum = 0
    for i in range(len(numbers) - 1):
        sum += abs(numbers[i] - numbers[i + 1])
    return sum


for c in range(int(input())):
    print('Case {}: {}'.format(
        c + 1, 
        reduce(lambda acc, n: n if n > acc else acc, 
            map(soma1055, permutations(
                [int(i) for e, i in enumerate(input().split()) if e != 0]
            )))))
