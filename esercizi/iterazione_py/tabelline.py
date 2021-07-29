# tabelline.py

# stampa la tavola pitagorica

print('Tabella Pitagorica\n')

for riga in range(1, 11):
    for colonna in range (1, 11):
        print('%5d' % (riga*colonna,), end='')
    print()
