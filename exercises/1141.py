def lcs(word: str, lst: list, pos: int) -> int:
    if pos == len(lst) - 1:
        return 0
    if word in lst[pos]:
        return 1 + lcs(lst[pos], lst, pos + 1)
    else:
        return max(lcs(word, lst, pos + 1), lcs(lst[pos], lst, pos + 1))


def main():
    lst = [
        'ant',
        'cant',
        'decant',
        'leonardo',
        'cadecant',
    ]

    print(lcs(lst[0], lst, 0))


if __name__ == "__main__":
    main()
