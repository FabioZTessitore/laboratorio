# thesum.py

# TheSum: somma un valore intero chiesto in input
# ad uno letto in un file.
# Salva il risultato nel file

import os

somma = 0
value = 0
filename = 'sum.dat'

if not os.path.isfile(filename):
    print("Impossibile aprire il file sum.dat")
    print("Verra' creato in fase di salvataggio dati.")
    somma = 0
else:
    f = open(filename, 'r')
    print("Lettura del file sum.dat in corso ...")
    line = f.readline()
    somma = int(line)
    f.close()
print('Valore corrente:', somma)

value = input('\nInserisci il valore da sommare: ')

somma += int(value)

print('\nNuovo valore:', somma)

print('Salvataggio nel file sum.dat in corso ...')
f = open(filename, 'w')
f.write(str(somma))
f.close()
