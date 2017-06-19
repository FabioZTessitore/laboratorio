/* rimbalzo2D-3.c */

/* rimbalzo di tre caratteri sullo schermo per 30 sec */

/* Istruzioni per la compilazione e l'esecuzione:
 *
 * Compilazione e link:
 * $ make rimbalzo2D-3
 *
 * Eseguire:
 * $ ./rimbalzo2D-3
 */

#include <ncurses.h>
#include <time.h>

int main()
{
  /* dimensioni del terminale */
  int ROWS, COLS;

  /* caratteri da stampare */
  int ch1 = '*';
  int ch2 = '#';
  int ch3 = '@';

  /* posizione, riga e colonna.
    double per tenere memoria delle posizioni intermedie,
    verranno arrotondati a int in fase di stampa
  */
  double row1 = 3.;
  double col1 = 3.;
  double row2 = 9.;
  double col2 = 7.;
  double row3 = 2.;
  double col3 = 18.;

  /* velocita' */
  int vel1_r = 10;
  int vel1_c = 10;
  int direz1_r = 1;
  int direz1_c = 1;
  int vel2_r = 5;
  int vel2_c = 5;
  int direz2_r = 1;
  int direz2_c = 1;
  int vel3_r = 15;
  int vel3_c = 20;
  int direz3_r = 1;
  int direz3_c = 1;

  int FPS = 10;
  double dt = 1. / (double)FPS;

  /* inizio e durata animazione */
  struct timespec start_anim;
  double start_anim_f;
  double anim_length = 0.;
  double durata = 30000.;  /* 30 sec */

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

  /* continua fino a 30 sec */
  while (anim_length < durata) {
    /* istante iniziale */
    clock_gettime(CLOCK_MONOTONIC, &start);

    /* calcola dimensione del terminale */
    getmaxyx(stdscr, ROWS, COLS);

    /* pulisce vecchia posizione */
    if ((int)row1 < ROWS && (int)col1 < COLS)
      mvaddch((int)row1, (int)col1, ' ');
    if ((int)row2 < ROWS && (int)col2 < COLS)
      mvaddch((int)row2, (int)col2, ' ');
    if ((int)row3 < ROWS && (int)col3 < COLS)
      mvaddch((int)row3, (int)col3, ' ');

    /* calcola nuova posizione */
    col1 += direz1_c * vel1_c * dt;
    if ((int)col1 >= COLS) {
      col1 = COLS-1;
      direz1_c = -direz1_c;
    } else if ((int)col1 < 0) {
      col1 = 0;
      direz1_c = -direz1_c;
    }
    row1 += direz1_r * vel1_r * dt;
    if ((int)row1 >= ROWS) {
      row1 = ROWS-1;
      direz1_r = -direz1_r;
    } else if ((int)row1 < 0) {
      row1 = 0;
      direz1_r = -direz1_r;
    }
    col2 += direz2_c * vel2_c * dt;
    if ((int)col2 >= COLS) {
      col2 = COLS-1;
      direz2_c = -direz2_c;
    } else if ((int)col2 < 0) {
      col2 = 0;
      direz2_c = -direz2_c;
    }
    row2 += direz2_r * vel2_r * dt;
    if ((int)row2 >= ROWS) {
      row2 = ROWS-1;
      direz2_r = -direz2_r;
    } else if ((int)row2 < 0) {
      row2 = 0;
      direz2_r = -direz2_r;
    }
    col3 += direz3_c * vel3_c * dt;
    if ((int)col3 >= COLS) {
      col3 = COLS-1;
      direz3_c = -direz3_c;
    } else if ((int)col3 < 0) {
      col3 = 0;
      direz3_c = -direz3_c;
    }
    row3 += direz3_r * vel3_r * dt;
    if ((int)row3 >= ROWS) {
      row3 = ROWS-1;
      direz3_r = -direz3_r;
    } else if ((int)row3 < 0) {
      row3 = 0;
      direz3_r = -direz3_r;
    }

    /* stampa */
    if ((int)row1 < ROWS && (int)col1 < COLS)
      mvaddch((int)row1, (int)col1, ch1);
    if ((int)row2 < ROWS && (int)col2 < COLS)
      mvaddch((int)row2, (int)col2, ch2);
    if ((int)row3 < ROWS && (int)col3 < COLS)
      mvaddch((int)row3, (int)col3, ch3);

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

  endwin();

  return 0;
}
