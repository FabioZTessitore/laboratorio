Le funzioni in Python


#### Le funzioni in Python

Il linguaggio Python permette la creazione di funzioni mediante la parola
chiave `def`. Ad esempio, una funzione che stampa un saluto:

```py
def hello():
  print "Hello, World!"
```

Oppure una funzione che stampa `n` saluti, quindi accetta un parametro:

```py
def hello(n):
  for i in range(n):
    print "Hello, World!"
```

In Python non è necessario scrivere il prototipo della funzione.

##### Esempio completo

```py
def hello(n):
  for i in range(n):
    print "Hello, World!"


# main program

print "Posso salutarti tutte le volte che vuoi"
n = input("Quante? ")
hello(n)
```

Prova ad aprire l'interprete Python e scrivi:

```
>>> "hello" * 5
'hellohellohellohellohello'
```

Come puoi vedere, se moltiplichi una stringa per un numero crei una nuova
stringa in cui si ripetono i caratteri della stringa originale il numero
di volte indicato. Utilizzando questa caratteristica si può eliminare il
ciclo dalla funzione `hello()`:

```py
def hello(n):
  # stampa n volte, senza ciclo!
  print "Hello, World!\n" * n
```

<a href="/activities/3">Torna alla Parte III</a>
