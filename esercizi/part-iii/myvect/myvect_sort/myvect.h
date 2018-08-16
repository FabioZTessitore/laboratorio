/* myvect.h */

/* Gestione di vettori di interi */

#ifndef MYVECT_H
#define MYVECT_H

void myvect_init();
void myvect_zeroes(int v[], int size);
void myvect_ones(int v[], int size);
void myvect_sequence(int v[], int size, int start, int step);
void myvect_random(int v[], int size, int min, int max);
void myvect_print(const int v[], int size);
void myvect_reverse(int v[], int size);

#endif
