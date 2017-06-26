Funzioni che ritornano valori

#### Funzioni che ritornano valori

Spesso si scrivono funzioni affinché calcolino un valore (magari a partire
dai parametri). Quando queste funzioni terminano, devono dire qual è
il valore da restituire e possono farlo tramite l'istruzione `return`.

Consideriamo il caso molto semplice di una funzione che effettua una somma
tra due numeri interi. La somma tra due `int` sarà ancora un `int`, quindi
la funzione avrà `int` come tipo di ritorno e non `void` come succedeva negli
esempi precedenti.

```c
int somma_interi(int a, int b)
{
  int s;

  s = a + b;

  return s;
}
```

Il codice appena scritto può essere semplificato mettendo insieme l'operazione
di somma e l'istruzione `return`:

```c
int somma_interi(int a, int b)
{
  /* calcola (a+b) e restituisce */
  return (a + b);
}
```

Un programma che faccia uso di `somma_interi()` potrebbe essere del tipo:

```c
int main()
{
  int num1, num2;
  int s;

  /* chiede num1 e num2 all'utente */
  ...

  s = somma_interi(num1, num2);

  /* stampa di s */
  ...
}
```

<a href="/activities/3">Torna alla Parte III</a>
