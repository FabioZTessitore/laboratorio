Esecuzione condizionale



#### Esecuzione condizionale

Abbiamo già visto che cosa significa effettuare scelte, dunque ti mostro
direttamente un esempio. &Egrave; lo stesso codice che hai visto in Python
riscritto in C:

```c
/* siano (x, y) le coordinate di un punto nel piano */
int x = 3;
int y = 5;

/* stampa un messaggio diverso a seconda del quadrante
 * di appartenenza del punto
 */
if (x > 0 && y > 0)
{
  printf("Il punto si trova nel primo quadrante\n");
}
else if (x < 0 && y > 0)
{
  printf("Il punto si trova nel secondo quadrante\n");
}
else if (x < 0 && y < 0)
{
  printf("Il punto si trova nel terzo quadrante\n");
}
else if (x > 0 && y < 0)
{
  printf("Il punto si trova nel quarto quadrante\n");
}
else
{
  printf("Il punto si trova su un asse\n");
}
```

Le parole chiave in C sono `if` e `else` e per effettuare scelte alternative
`else if`:

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

Un'altra cosa importante. I blocchi di codice in C
sono delimitati dalle parentesi graffe `{ ... }`.

Infine, gli operatori logici `and`, `or` e `not` si scrivono
rispettivamente `&&`, `||` e `!`.

<a href="/activities/1">Torna alla Parte I</a>
