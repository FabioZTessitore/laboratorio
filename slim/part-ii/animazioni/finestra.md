Aggiornamento dimensioni del terminale



#### Aggiornamento dimensioni del terminale

Durante un'animazione bisogna tenere conto della possibilità che il terminale
possa essere ridimensionato.

Dovresti ricordare che la funzione `getmaxyx()` si occupa di scoprire
quante righe e quante colonne abbiamo a disposizione.

Affinché tutto funzioni correttamente, la chiamata a `getmaxyx()` dovrà
essere fatta all'interno del ciclo di animazione o, se preferisci, bisognerà
determinare la dimensione del terminale ad ogni frame.

```c
/* numero di righe e di colonne, da calcolare */
int ROWS, COLS;

/* ciclo di animazione */
while (...) {
  getmaxyx(stdscr, ROWS, COLS);
}
```

<a href="/activities/2">Torna alla Parte II</a>
