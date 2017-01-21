# Le dimensioni del terminale

![](../../images/people/tess.png): Sig. Tazza, voglio mostrarle come fare
per ottenere le dimensioni del terminale in modo tale che le sue stampe
siano sempre visibili.

Di scoprire quante righe e quante colonne ha a disposizione si occupa
`getmaxyx()`. Per poterla usare deve fornirle un riferimento allo schermo
virtuale di cui vuole conoscere le dimensioni.

![](../../images/people/tazza.png): Ma non so chi sia questo schermo virtuale.
L'ho usato in maniera automatica chiamando la funzione `refresh()`, ma niente
di più.

![](../../images/people/tess.png): Infatti. Perché lo schermo virtuale viene
creato automaticamente. Deve solo conoscerne il nome: `stdscr`.

```c
/* dim_term.c */

/* ottenere le dimensioni del terminale */

#include <ncurses.h>

int main()
{
  int ROWS, COLS; /* numero di righe e di colonne, da calcolare */

  initscr();    /* inizializza */
  curs_set(0);  /* spegne il cursore */

  /* getmaxyx() permette di ottenere il numero di righe
   *            e il numero di colonne del terminale in uso.
   *
   *            Le librerie ncurses creano automaticamente
   *            uno schermo virtuale chiamato stdscr (standard screen).
   *
   * getmaxyx() chiede a stdscr che dimensioni ha.
   *
   * Nota: getmaxyx() non e' una funzione, anche se si usa allo stesso modo!
   */
  getmaxyx(stdscr, ROWS, COLS);

  mvprintw(5, 5, "Numero di righe: %d", ROWS);
  mvprintw(7, 5, "Numero di colonne: %d", COLS);
  refresh();

  getch();

  endwin();

  return 0;
}
```

Torna a [Introduzione alle librerie NCurses](../summary.md)
