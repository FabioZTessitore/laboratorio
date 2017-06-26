Bisezione

#### Bisezione

Il metodo di bisezione è relativamente semplice ma molto più veloce rispetto
ai metodi a forza bruta. L'idea è quella di individuare lo spazio di ricerca,
cioè un intervallo di valori all'interno del quale si immagina possa esserci
la soluzione al problema. Poi si testa il valore posto al centro di questo
intervallo e se non è quello cercato si può ridurre la ricerca a metà
dell'intervallo iniziale.

Riprendiamo l'esempio della radice cubica.

```py
# 100^3
n = 1000000

# estremi dell'intervallo
low = 0
high = n

# contatore, per verificare quanti
# passaggi vengono effettuati
counter = 1

while low <= high:
    print "counter:", counter
    print "cerca tra", low, "e", high, "\n"

    # individua l'elemento
    # centrale dell'intervallo
    guess = (low+high) / 2

    # test, se fallisce
    # modifica gli estremi di ricerca
    if guess*guess*guess == n:
        break
    elif guess*guess*guess < n:
        low = guess+1
    else:
        high = guess-1

    counter += 1

if guess*guess*guess == n:
    print "Soluzione:", guess
else:
    print "Nessuna soluzione trovata"
```

<a href="/activities/2">Torna alla Parte II</a>
