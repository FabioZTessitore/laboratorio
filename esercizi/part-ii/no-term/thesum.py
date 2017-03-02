# thesum.py

# TheSum: somma un valore intero chiesto in input
# ad uno letto in un file.
# Salva il risultato nel file

somma = 0
value = 0

f = open('sum.dat', 'r')
if not f:
    print "Impossibile aprire il file sum.dat"
    print "Verra' creato in fase di salvataggio dati."
    somma = 0
else:
    print "Lettura del file sum.dat in corso ..."
    line = f.readline()
    somma = int(line)
    f.close()
print 'Valore corrente:', somma

value = input('\nInserisci il valore da sommare: ')

somma += value

print '\nNuovo valore:', somma

print 'Salvataggio nel file sum.dat in corso ...'
f = open('sum.dat', 'w')
f.write(str(somma))
f.close()
