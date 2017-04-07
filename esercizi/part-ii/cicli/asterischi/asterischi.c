/* asterischi.c */

/* Stampa il lampeggio di un asterisco alla posizione (3, 3) */

#include <ncurses.h>
#include <time.h>

int main()
{
  int i;

  int volte = 10;                         /* lampeggia 10 volte */

  struct timespec intervallo;
  intervallo.tv_sec = 0;                  /* 0 secondi e */
  intervallo.tv_nsec = 700 * 1000 * 1000; /* 700 millisecondi */

  initscr();
  curs_set(0);

  for (i = 0; i < volte; i++) {
    mvaddch(3, 3, '*');
    refresh();
    nanosleep(&intervallo, NULL);
    mvaddch(3, 3, ' ');
    refresh();
    nanosleep(&intervallo, NULL);
  }

  mvprintw(18, 3, "Premi un tasto per terminare");
  refresh();
  getch();

  endwin();

  return 0;
}
