Le dimensioni del terminale


#### Le dimensioni del terminale

`getmaxyx()` si occupa di scoprire quante righe e quante colonne
abbiamo a disposizione. Per poterla usare bisogna fornirle lo *schermo
virtuale* di cui si vogliono conoscere le dimensioni.

Poiché lo schermo virtuale viene creato automaticamente, bisogna solo
conoscerne il nome: `stdscr` (standard screen).

```c
/* dim_term.c */

/* ottenere le dimensioni del terminale */

#include <ncurses.h>

int main()
{
  /* numero di righe e di colonne, da calcolare */
  int ROWS, COLS;

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

<a href="/activities/2">Torna alla Parte II</a>
