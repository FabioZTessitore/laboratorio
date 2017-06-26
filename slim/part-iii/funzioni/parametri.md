Funzioni che accettano parametri

#### Funzioni che accettano parametri

Le funzioni `cinque_asterischi()` e `stampa_quadrato()` fanno bene il loro
lavoro, ma sono poco flessibili. Infatti, non è possibile modificare la
lunghezza del lato del quadrato. Sarebbe meglio poter dire alla funzione
`stampa_quadrato()` qual è la lunghezza del lato e bisogna riformulare
la funzione `cinque_asterischi()` in modo che sappia quanti asterischi deve
stampare e non limitarsi a cinque.

Le funzioni `stampa_quadrato()` e `stampa_asterischi()` devono allora
accettare un parametro. La prima ha bisogno del lato del quadrato (di tipo `int`),
la seconda del numero di asterischi da stampare (tipo `int`).

```c
/* stampa_asterischi() accetta un intero
 * come parametro che rappresenta il
 * numero di asterischi da stampare
 */
void stampa_asterischi(int n)
{
  int c;

  for (c = 0; c < n; c++) {
    putchar('*');
  }
  putchar('\n');
}
```

```c
/* stampa_quadrato() accetta un intero
 * come parametro che rappresenta il
 * lato del quadrato da stampare
 */
void stampa_quadrato(int lato)
{
  int r;

  for (r = 0; r < lato; r++) {
    /* invoca stampa_asterischi()
     * passandole come parametro
     * il numero di asterischi da stampare
     */
    stampa_asterischi(lato);
  }
}
```

<a href="/activities/3">Torna alla Parte III</a>
