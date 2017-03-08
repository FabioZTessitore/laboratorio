Radice quadrata



#### Radice quadrata

Trovare la radice quadrata di `x = 25`:

1. scegli un numero `g` a caso (diverso da 0)
2. calcola `g*g` e se il risultato non è "abbastanza vicino" a `x` vai al prossimo punto
3. calcola `g = (g + x/g) / 2`
4. torna al punto 2

##### prima iterazione

`g = 1`

`g * g = 1 * 1 = 1` è "troppo distante" da 25, continuo

`g = (g + x/g) / 2 = (1 + 25/1) / 2 = (1 + 25) / 2 = 13`

### seconda iterazione

`g = 13`

`g * g = 13 * 13 = 169` è "troppo distante" da 25, continuo

`g = (g + x/g) / 2 = (13 + 25/13) / 2 = (13 + 1.92) / 2 = 7.46`

### terza iterazione

`g = 7.46`

`g * g = 7.46 * 7.46 = 55.65` è "troppo distante" da 25, continuo

`g = (g + x/g) / 2 = (7.46 + 25/7.46) / 2 = (7.46 + 3.35) / 2 = 5.40`

### quarta iterazione

`g = 5.40`

`g * g = 5.40 * 5.40 = 29.16` diciamo che è "abbastanza vicino" a 25. Ormai il senso
dovrebbe essere chiaro.

Quindi la soluzione trovata, dopo quattro iterazioni, è `5.40`

Quante iterazioni sono necessarie per arrivare a `5.0`?

<a href="/activities/1">Torna alla Parte I</a>
