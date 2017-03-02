# Leggere e scrivere file in Python

## Aprire e chiudere un file di testo

![](../../images/people/tess.png): Ovviamente anche in Python
possiamo lavorare con i file.

```py
f = open('myfile.txt', 'w')
```

![](../../images/people/tess.png): La funzione `open()` ritorna un oggetto
che rappresenta il file aperto. Tale oggetto mette
a disposizione delle operazioni, tra cui `close()` e  `write()`:


```py
f = open('myfile.txt', 'w')

f.close()
```

## Scrivere in un file

![](../../images/people/tess.png): Per la scrittura usiamo `write()`:

```py
f = open('myfile.txt', 'w')

f.write('Hello, World!\n')

f.close()
```

## Leggere da un file

![](../../images/people/tess.png): Per leggere dobbiamo fare qualche passaggio
in più perché l'oggetto file può leggere solo stringhe.

In particolare, una delle operazioni
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

f.close()
```

Torna a [Non solo terminale](../summary.md)

Oppure [continua a leggere](esercizi.md)
