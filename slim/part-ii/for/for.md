Il ciclo for


#### Il ciclo for

Il *ciclo for* permette di scrivere in maniera più compatta quello che
abbiamo visto per il ciclo while.

Infatti, mentre con il ciclo while l'inizializzazione del contatore,
la condizione di fine ciclo e l'aggiornamento del contatore sono effettuate
su linee diverse, con il ciclo for basta una riga di codice:

```c
/* ciclo while */

/* inizializzazione del contatore */
int i = 0;

/* condizione di fine ciclo */
while (i < 10) {
  ...

  /* aggiornamento del contatore */
  i++;
}

/* ciclo for equivalente */
int i;

/* tutto su una riga */
for (i = 0; i < 10; i++) {
  ...
}
```

<a href="/activities/2">Torna alla Parte II</a>
