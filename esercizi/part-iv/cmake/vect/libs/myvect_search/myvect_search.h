/* myvect_search.h */

/* Ricerca all'interno di un vettore */

#ifndef MYVECT_SEARCH_H
#define MYVECT_SEARCH_H

/* Cerca key in v. Restituisce la posizione
 * oppure -1 se non trovato */
int myvect_linear_search(const int v[], const int size, const int key);

int myvect_binary_search(const int v[], const int size, const int key);

#endif
