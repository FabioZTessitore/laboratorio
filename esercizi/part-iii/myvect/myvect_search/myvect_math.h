/* myvect_math.h */

/* Operazioni matematiche su vettori */

#ifndef MYVECT_MATH_H
#define MYVECT_MATH_H

int myvect_sum(const int v[], const int size);
double myvect_mean(const int v[], const int size);
int myvect_min(const int v[], const int size);
int myvect_max(const int v[], const int size);
int myvect_min_index(const int v[], const int size);
int myvect_max_index(const int v[], const int size);
int myvect_dot_product(const int v1[], const int v2[], const int size);

#endif
