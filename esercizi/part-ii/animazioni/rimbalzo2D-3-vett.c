/* rimbalzo2D-3-vett.c */

/* rimbalzo di tre caratteri sullo schermo per 30 sec (con vettori) */

#include <ncurses.h>
#include <time.h>

int main()
{
  /* dimensioni del terminale */
  int ROWS, COLS;

  int i;
  int NCAR = 3;

  /* caratteri da stampare */
  int ch[] = { '*', '#', '@' };

  /* posizione, riga e colonna.
    double per tenere memoria delle posizioni intermedie,
    verranno arrotondati a int in fase di stampa
  */
  double row[] = { 3., 9., 2. };
  double col[] = { 3., 7., 18. };

  /* velocita' */
  int vel_r[] = { 10, 5, 15 };
  int vel_c[] = { 10, 5, 20 };

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
    for (i = 0; i < NCAR; i++) {
      if ((int)row[i] < ROWS && (int)col[i] < COLS)
        mvaddch((int)row[i], (int)col[i], ' ');
    }

    /* calcola nuova posizione */
    for (i = 0; i < NCAR; i++) {
      col[i] += vel_c[i] * dt;
      if ((int)col[i] >= COLS) {
        col[i] = COLS-1;
        vel_c[i] = -vel_c[i];
      } else if ((int)col[i] < 0) {
        col[i] = 0;
        vel_c[i] = -vel_c[i];
      }
      row[i] += vel_r[i] * dt;
      if ((int)row[i] >= ROWS) {
        row[i] = ROWS-1;
        vel_r[i] = -vel_r[i];
      } else if ((int)row[i] < 0) {
        row[i] = 0;
        vel_r[i] = -vel_r[i];
      }
    }

    /* stampa */
    for (i = 0; i < NCAR; i++) {
      if ((int)row[i] < ROWS && (int)col[i] < COLS)
        mvaddch((int)row[i], (int)col[i], ch[i]);
    }
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
