/* guess.h */

#ifndef GUESS_H
#define GUESS_H

void guess_init();

void guess_header(int min, int max);

int guess_number(int min, int max);

int guess_check(int number, int guess);

#endif
