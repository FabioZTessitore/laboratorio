/* rimbalzo2D.c */

/* rimbalzo di un carattere sullo schermo per 30 sec */

#include <ncurses.h>
#include <time.h>

int main()
{
  /* dimensioni del terminale */
  int ROWS, COLS;

  /* carattere da stampare */
  int ch = '*';

  /* posizione, riga e colonna.
    double per tenere memoria delle posizioni intermedie,
    verranno arrotondati a int in fase di stampa
  */
  double row = 3.;
  double col = 3.;

  /* velocita' verticale (righe percorse ogni secondo) */
  int vel_r = 10;
  /* velocita' orizzontale (colonne percorse ogni secondo) */
  int vel_c = 10;

  int FPS = 10;
  double dt = 1. / (double)FPS;

  /* inizio e durata animazione */
  struct timespec start_anim;
  double start_anim_f;
  double anim_length = 0.;

  /* inizio e fine frame */
  struct timespec start, end;
  double start_f, end_f;

  struct timespec ritardo;
  double ritardo_f;

  initscr();
  curs_set(0);

  /* inizio animazione */
  clock_gettime(CLOCK_MONOTONIC, &start_anim);
  start_anim_f = start_anim.tv_sec * 1000. + start_anim.tv_nsec / 1.e6;

  /* continua fino a 5 sec */
  while (anim_length < 30000.) {
    /* istante iniziale */
    clock_gettime(CLOCK_MONOTONIC, &start);

    /* calcola dimensione del terminale */
    getmaxyx(stdscr, ROWS, COLS);

    /* pulisce vecchia posizione */
    if ((int)row < ROWS && (int)col < COLS)
      mvaddch((int)row, (int)col, ' ');

    /* calcola nuova posizione */
    col += vel_c * dt;
    if ((int)col >= COLS) {
      col = COLS-1;
      vel_c = -vel_c;
    } else if ((int)col < 0) {
      col = 0;
      vel_c = -vel_c;
    }
    row += vel_r * dt;
    if ((int)row >= ROWS) {
      row = ROWS-1;
      vel_r = -vel_r;
    } else if ((int)row < 0) {
      row = 0;
      vel_r = -vel_r;
    }

    /* stampa */
    if ((int)row < ROWS && (int)col < COLS)
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

    anim_length = end_f - start_anim_f;
  }

  mvprintw(18, 3, "Premi un tasto per terminare");
  refresh();
  getch();

  endwin();

  return 0;
}
