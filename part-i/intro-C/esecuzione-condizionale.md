# Esecuzione Condizionale

![](../../images/people/tess.png): Visto che già sa come effettuare scelte, le mostro
direttamente un esempio. &Egrave; lo stesso codice che ha visto in Python
riscritto in C:

```c
/* siano (x, y) le coordinate di un punto nel piano */
int x = 3;
int y = 5;

/* stampa un messaggio diverso a seconda del quadrante
 * di appartenenza del punto
 */
if (x > 0 && y > 0) {
  printf("Il punto si trova nel primo quadrante\n");
} else if (x < 0 && y > 0) {
  printf("Il punto si trova nel secondo quadrante\n");
} else if (x < 0 && y < 0) {
  printf("Il punto si trova nel terzo quadrante\n");
} else if (x > 0 && y < 0) {
  printf("Il punto si trova nel quarto quadrante\n");
} else {
  printf("Il punto si trova su un asse\n");
}
```

![](../../images/people/tazza.png): Ma è tutto diverso!

![](../../images/people/tess.png): Si e no. La sintassi è evidentemente diversa,
ma il concetto resta lo stesso.

![](../../images/people/tazza.png): Parliamo delle differenze.

![](../../images/people/tess.png): Certo. Partiamo dalle parole chiave. In C sono
`if` e `else` e per effettuare scelte alternative `else if`. Quindi:

```c
if (condizione) {
  ...
} else if (condizione alternativa) {
  ...
} else if (condizione alternativa) {
  ...
} else {
  ...
}
```

![](../../images/people/tess.png): Un'altra cosa importante. I blocchi di codice in C
sono delimitati dalle parentesi graffe `{ ... }`.

![](../../images/people/tess.png): Infine, gli operatori logici `and`, `or` e `not` si scrivono
rispettivamente `&&`, `||` e `!`

![](../../images/people/tazza.png): Va bene, proverò a ricordarlo.

![](../../images/people/tess.png): *&lt;tono-maestro-jedi&gt;Provare non esiste. Fare o non fare&lt;/tono-maestro-jedi&gt;*

Torna a [Introduzione al C](../summary.md)

Oppure [continua a leggere](esercizi3.mb)
