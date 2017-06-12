Cambiare posizione sullo schermo



#### Cambiare posizione sullo schermo

Una delle caratteristiche delle librerie NCurses è quella di permettere di cambiare
la posizione di stampa sullo schermo. A tal proposito esiste la funzione `move()`:

```c
/* sposta il cursore alla riga di indice 13 (quattordicesima)
 * e alla colonna di indice 5 (sesta) */
move(13, 5);

addstr("Hello, World!");
```

Siccome l'operazione di spostare il cursore prima di stampare è molto comune,
esistono delle funzioni che accorpano tali operazioni.
Sono `mvprintw()`, `mvaddstr()` e `mvaddch()`:

```c
/* position.c */

/* spostare il cursore */

#include <ncurses.h>

int main()
{
  initscr();

  /* rende invisibile il cursore */
  curs_set(0);
  /*
   * i valori possibili sono:
   * 0    invisibile
   * 1    visibile
   * 2    molto visibile
   */

  /* sposta il cursore */
  move(5, 10);
  /* e poi stampa */
  addstr("Questa stringa viene stampata alla riga"
        " di indice 5 e colonna di indice 10");

  /* sposta e stampa */
  mvaddstr(10, 20, "Hello, Ncurses");
  mvaddstr(20, 20, "Premi un tasto per uscire");

  refresh();

  getch();

  endwin();

  return 0;
}
```

<a href="/activities/2">Torna alla Parte II</a>
