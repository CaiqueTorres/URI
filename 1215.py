# URI - 1215 - Ainda falta terminar

import re

words = list()
while True:
    try:
        words.extend([
            s 
            for s in re.sub("[^a-z]", " ", input().lower()).split()
            if s not in words
        ])
    except EOFError:
        break

for word in sorted(words):
    print(word)

# def return_part(string: str) -> str:
#     word = str()
#     for c in string:
#         if c.isalpha():
#             word += c
#         else:
#             yield word.lower()
#             word = str()
#     yield word.lower()

# words = list()
# while True:
#     try:
#         words.extend(
#             s for s in return_part(input()) if s not in words
#         )
#     except EOFError:
#         break

# for word in sorted(words):
#     print(word)
