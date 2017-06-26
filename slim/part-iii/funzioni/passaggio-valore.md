Il passaggio per valore



#### Il passaggio per valore

Riprendiamo la funzione `int somma_interi(int, int)`. Abbiamo detto che accetta
due interi come parametri e restituisce un intero (la somma dei parametri):

```c
int somma_interi(int a, int b)
{
  return (a + b);
}
```

Cosa succede quando la invochiamo con:

```c
int main()
{
  int num1, num2;

  ...

  s = somma_interi(num1, num2);

  ...
}
```

Dire che i valori `num1` e `num2` sono passati alla funzione `somma_interi()`
significa dire che essi vengono **copiati** nei parametri *formali* della funzione.
In altre parole, il valore di `num1` viene **copiato** in `a` e `num2` viene
**copiato** in `b`. Trattandosi di copie, se la funzione li altera, questo
non inciderà sui valori originali `num1` e `num2`.

Per esempio la funzione `somma_interi()` può essere riscritta in questo modo
senza che ne sia alterato il funzionamento:

```c
int somma_interi(int a, int b)
{
  /* somma b ad a */
  a = a + b;

  /* restituisce il nuovo valore di a */
  return a;
}
```

<a href="/activities/3">Torna alla Parte III</a>
