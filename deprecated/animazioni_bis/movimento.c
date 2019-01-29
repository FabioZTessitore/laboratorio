/* movimento.c */

/* sposta il cursore */

#include <ncurses.h>
#include <time.h>

int main()
{
  /* carattere da stampare */
  int ch = '*';

  /* posizione, riga e colonna.
    double per tenere memoria delle posizioni intermedie,
    verranno arrotondati a int in fase di stampa
  */
  double row = 3.;
  double col = 3.;

  /* velocita' (colonne percorse ogni secondo) */
  int vel = 10;

  int FPS = 10;
  double dt = 1. / (double)FPS;

  struct timespec start, end;
  double start_f, end_f;
  struct timespec ritardo;
  double ritardo_f;

  int i;

  initscr();
  curs_set(0);

  for (i = 0; i < 50; i++) {
    /* istante iniziale */
    clock_gettime(CLOCK_MONOTONIC, &start);

    /* pulisce vecchia posizione */
    mvaddch((int)row, (int)col, ' ');

    /* calcola nuova posizione */
    col += vel * dt;

    /* stampa */
    mvaddch((int)row, (int)col, ch);
    refresh();

    /* istante finale */
    clock_gettime(CLOCK_MONOTONIC, &end);

    /* calcola ritardo */
    start_f = start.tv_sec * 1000. + start.tv_nsec / 1.e6;
    end_f = end.tv_sec * 1000. + end.tv_nsec / 1.e6;
    ritardo_f = dt * 1000. - (end_f - start_f);
    ritardo.tv_sec = (int)(ritardo_f / 1000.);
    ritardo.tv_nsec = (int)((ritardo_f - ritardo.tv_sec) * 1000. * 1000.);
    nanosleep(&ritardo, NULL);
  }

  mvprintw(18, 3, "Premi un tasto per terminare");
  refresh();
  getch();

  endwin();

  return 0;
}
