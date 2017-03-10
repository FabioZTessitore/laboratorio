Effettuare scelte


#### Effettuare scelte

Se vuoi che i tuoi programmi siano poco meno che banali, dovrai effettuare
delle scelte. A volte è necessario eseguire certe
istruzioni solo quando si verificano particolari condizioni.

Per effettuare scelte si usa il costrutto `if`.

Un esempio chiarirà il concetto. Immagina di avere le coordinate `(x, y)` di
un punto e di voler stampare un messaggio diverso in base al quadrante in cui
il punto si trova.

```py
# siano (x, y) le coordinate di un punto nel piano
x = 3
y = 5

# stampa un messaggio diverso in base al quadrante
# di appartenenza del punto
if x > 0 and y > 0:
    print "Il punto si trova nel primo quadrante"

elif x < 0 and y > 0:
    print "Il punto si trova nel secondo quadrante"

elif x < 0 and y < 0:
    print "Il punto si trova nel terzo quadrante"

elif x > 0 and y < 0:
    print "Il punto si trova nel quarto quadrante"

else:
    print "Il punto si trova su un asse"
```

Quando usi il costrutto `if` devi specificare quale condizione
deve essere verificata affinché le istruzioni seguenti siano eseguite.
Puoi anche fornire delle alternative utilizzando `elif` (abbreviazione di `else if`).

Quando nessuna delle alternative che hai fornito risulta verificata,
allora vengono eseguite le istruzioni del blocco `else`.

<a href="/activities/1">Torna alla Parte I</a>
