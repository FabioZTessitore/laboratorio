/* asterischi.c */

/* Stampa il lampeggio di un asterisco alla posizione (3, 3) */

 /* Istruzioni per la compilazione e l'esecuzione:
  *
  * Compilare:
  * $ gcc -c asterischi.c -o asterischi.o
  *
  * Link:
  * $ gcc asterischi.o -o asterischi -lncurses
  *
  * Eseguire:
  * $ ./asterischi
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

  mvaddch(3, 3, '*');
  refresh();
  nanosleep(&intervallo, NULL);
  mvaddch(3, 3, ' ');
  refresh();
  nanosleep(&intervallo, NULL);

  mvaddch(3, 3, '*');
  refresh();
  nanosleep(&intervallo, NULL);
  mvaddch(3, 3, ' ');
  refresh();
  nanosleep(&intervallo, NULL);

  mvaddch(3, 3, '*');
  refresh();
  nanosleep(&intervallo, NULL);
  mvaddch(3, 3, ' ');
  refresh();
  nanosleep(&intervallo, NULL);

  mvaddch(3, 3, '*');
  refresh();
  nanosleep(&intervallo, NULL);
  mvaddch(3, 3, ' ');
  refresh();
  nanosleep(&intervallo, NULL);

  mvaddch(3, 3, '*');
  refresh();
  nanosleep(&intervallo, NULL);
  mvaddch(3, 3, ' ');
  refresh();
  nanosleep(&intervallo, NULL);

  mvprintw(18, 3, "Premi un tasto per terminare");
  refresh();
  getch();

  endwin();
  return 0;
}
