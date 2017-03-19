Leggere e scrivere file in Python


#### Leggere e scrivere file in Python

##### Aprire e chiudere un file di testo

Ovviamente anche in Python possiamo lavorare con i file.

```py
f = open('myfile.txt', 'w')
```

La funzione `open()` ritorna un oggetto
che rappresenta il file aperto. Tale oggetto mette
a disposizione delle operazioni, tra cui `close()` e `write()`:

```py
f = open('myfile.txt', 'w')

f.close()
```

##### Scrivere in un file

Per la scrittura usiamo `write()`:

```py
f = open('myfile.txt', 'w')

f.write('Hello, World!\n')

f.close()
```

##### Leggere da un file

Per leggere dobbiamo fare qualche passaggio
in più perché l'oggetto file può leggere solo stringhe.

In particolare, una delle operazioni
messe a disposizione è `readline()` che legge una riga intera.

Crea un file con il tuo editor di testi preferito
e scrivici dentro un numero, ad esempio intero:

> myfile.txt

```
42
```

Prova:

```py
f = open('myfile.txt', 'r');

# legge tutta la riga e restituisce una stringa
line = f.readline()

# converte in intero
num = int(line)

print 'Ho letto il valore', num

f.close()
```

<a href="/activities/2">Torna alla Parte II</a>
