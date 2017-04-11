break e continue



#### break e continue

A volte è necessario modificare il flusso di esecuzione
durante un ciclo. Ad esempio, al verificarsi di una certa condizione
potrebbe essere necessario interrompere il ciclo stesso.

```
int i;

/* conta, ma interrompe il ciclo a 5 */
printf("Dovrebbe contare da 1 a 10\n"
      "ma si ferma a cinque (escluso)\n");
for (i = 1; i <= 10; i++) {
  /* quando i vale 5 interrompe il ciclo! */
  if (i == 5) break;

  printf("%d ", i);
}
```

Altre volte è necessario saltare delle iterazioni.

```
/* conta da 1 a 10, ma salta il 5 */
printf("Conta da 1 a 10 ma salta il 5\n");
for (i = 1; i <= 10; i++) {
  /* quando i vale 5 salta alla prossima iterazione */
  if (i == 5) continue;

  printf("%d ", i);
}
```

<a href="/activities/2">Torna alla Parte II</a>
