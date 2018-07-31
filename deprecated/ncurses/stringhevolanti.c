/* stringhevolanti.c */

/* Stampa tre stringhe alle posizioni (15, 4), (10, 20), (5, 4)
 * ad intervallo di 700 ms l'una dall'altra
 */

 /* Istruzioni per la compilazione e l'esecuzione:
  *
  * Compilare:
  * $ gcc -c stringhevolanti.c -o stringhevolanti.o
  *
  * Link:
  * $ gcc stringhevolanti.o -o stringhevolanti -lncurses
  *
  * Eseguire:
  * $ ./stringhevolanti
  */

#include <ncurses.h>
#include <time.h>

int main()
{
  struct timespec intervallo;
  intervallo.tv_sec = 0;                  /* 0 secondi e */
  intervallo.tv_nsec = 700 * 1000 * 1000; /* 700 millisecondi */

  initscr();
  curs_set(0);

  mvprintw(15, 4, "Prima Stringa");
  refresh();
  nanosleep(&intervallo, NULL);

  mvprintw(10, 20, "Seconda Stringa");
  refresh();
  nanosleep(&intervallo, NULL);

  mvprintw(5, 4, "Terza Stringa");
  refresh();
  nanosleep(&intervallo, NULL);

  mvprintw(18, 4, "Premi un tasto per terminare");
  refresh();
  getch();

  endwin();
  return 0;
}
