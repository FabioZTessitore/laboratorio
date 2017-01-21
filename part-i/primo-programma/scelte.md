# Effettuare scelte

![](../../images/people/tess.png): Come le stavo dicendo, se vuole che i suoi programmi
siano poco meno che banali, dovrà effettuare delle scelte in base a certe condizioni.

![](../../images/people/tazza.png): Non sono sicuro di aver capito bene,
che tipo di scelte?

![](../../images/people/tess.png): A volte è necessario eseguire certe
istruzioni solo quando si verificano particolari condizioni.

Per effettuare scelte si usa il costrutto `if`. In Python le parole
riservate del linguaggio sono `if elif else`:

Un esempio chiarirà il concetto. Immagini di avere le coordinate `(x, y)` di
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

![](../../images/people/tazza.png): &Egrave; tutto abbastanza chiaro, tranne cosa significa
`else` e come si usa.

![](../../images/people/tess.png): Sig. Tazza, come sempre ha colto l'essenza del problema.

Quando usa il costrutto `if` deve specificare quale condizione deve essere verificata
affinché le istruzioni seguenti siano eseguite. Può anche fornire delle alternative
utilizzando `elif` (abbreviazione di `else if`).

![](../../images/people/tazza.png): Di `else` non vuole parlare?

![](../../images/people/tess.png): Ero giusto arrivato al punto. Quando nessuna delle
alternative che ha fornito risulta verificata, allora vengono eseguite le istruzioni
del blocco `else`.

Torna a [Il primo programma](../summary.md)

Oppure [continua a leggere](esercizi2.mb)
