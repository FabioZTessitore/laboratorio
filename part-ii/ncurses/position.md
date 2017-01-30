# Cambiare posizione sullo schermo

![](../../images/people/tess.png): Ricorda che le ho detto che una delle
caratteristiche delle librerie NCurses è quella di permettere di cambiare
la posizione di stampa sullo schermo?

A tal proposito esiste la funzione `move()`:

```c
move(13, 5);    /* sposta il cursore alla riga di indice 13 (quattordicesima)
                                           e alla colonna di indice 5 (sesta) */
addstr("Hello, World!");
```

![](../../images/people/tazza.png): Fantastico, così posso creare facilmente
delle stampe anche complesse.

![](../../images/people/tess.png): E non è tutto. Siccome l'operazione
di spostare il cursore prima di stampare è molto comune esistono
delle funzioni che accorpano tali operazioni. Sono `mvprintw()`, `mvaddstr()`
e `mvaddch()`:

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

  /* move() sposta il cursore */
  move(5, 10);
  /* e poi stampa */
  addstr("Questa stringa viene stampata alla riga di indice 5 e colonna di indice 10");

  /* sposta e stampa */
  mvaddstr(10, 20, "Hello, Ncurses");
  mvaddstr(20, 20, "Premi un tasto per uscire");

  refresh();

  getch();

  endwin();

  return 0;
}
```

Torna a [Introduzione alle librerie NCurses](../summary.md)
