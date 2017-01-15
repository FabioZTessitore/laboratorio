# Leggere e scrivere file in Python

## Aprire e chiudere un file di testo

![](../../images/people/tess.png): Anche in Python esistono funzioni per
l'apertura e chiusura di file. Si chiamano `open()` e `close()`.

```py
f = open('myfile.txt', 'w')

close(f)
```

## Scrivere in un file

![](../../images/people/tess.png): La funzione `open()` ritorna un oggetto
che rappresenta il file aperto. Per poter scrivere, tale oggetto file, mette
a disposizione l'operazione `write()`:

```py
f = open('myfile.txt', 'w')

f.write('Hello, World!\n')

close(f)
```

## Leggere da un file

![](../../images/people/tess.png): Per leggere dobbiamo fare qualche passaggio
in più perché l'oggetto file può leggere stringhe. Una delle operazioni
messe a disposizione è `readline()` che legge una riga intera.

Crei un file con il suo editor di testi preferito
e ci scriva dentro un numero, ad esempio intero:

> myfile.txt

```
42
```

![](../../images/people/tess.png): Provi:

```py
f = open('myfile.txt', 'r');

line = f.readline()   # legge tutta la riga e restituisce una stringa
num = int(line)       # converte in intero

print 'Ho letto il valore', num

close(f)
```

Torna a [Funny Output](part-ii/summary.md)
