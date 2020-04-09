# URI - 2222

for a in range(int(input())):
    sets = { str(b + 1): set(input().split()[1:]) 
        for b in range(int(input())) }

    for c in range(int(input())):
        op, l1, l2 = input().split()

        if op == '1':
            print(len(sets[l1] & sets[l2]))
        else:
            print(len(sets[l1] | sets[l2]))

# | e & possuiram notável melhora de performance 2s para 1.5s
# criação de dicionário melhora de performance de 1.5s para 1.2s
