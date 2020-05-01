/* postfix.h */

/* Conversione di una espressione scritta in notazione infissa in notazione polacca inversa */

/* Es.
 *
 * 8 + 3 ---> 8 3 +
 *
 * (8 + 3) * 5 ---> 8 3 + 5 *
 * (24 + 4) * 8 ---> 24 4 + 8 *
 */

/* Operazione preliminare:
 *
 * Siccome i numeri possono essere composti da piu' cifre, la prima operazione
 * e' la creazione di una coda contenente i vari token (parentesi, operatori, numeri)
 *
 * Dati:
 * - infix      il vettore contenente l'espressione da convertire
 * - token      coda contenente la lista dei token
 *
 * 1) Per ogni carattere di infix
 * 2)     se e' spazio ignora
 * 3)     se e' una parentesi o un operatore inserisce in coda
 * 4)     se e' una cifra, determina la fine delle cifre e inserisce in coda
 *
 * Es.
 *
 * 8 + 3 ---> 8 --> + --> 3 --> NULL
 * (8 + 3) * 5 ---> ( --> 8 --> + --> 3 --> ) --> * --> 5 --> NULL
 * (24 + 4) * 8 ---> ( --> 24 --> + --> 4 --> ) --> * --> 8 --> NULL
 */
 
/*
 * Algoritmo di conversione:
 *
 * Dati:
 * - token      la coda contenente i token
 * - postfix    la coda contenente l'espressione convertita
 * - stack      uno stack per la memorizzazione temporanea dei caratteri
 *
 *  1) inserire una parentesi aperta nello stack e una chiusa al termine di token
 *  2) finche' lo stack non e' vuoto:
 *  3)     estrae il primo token
 *  4)     se e' un numero lo copia in postfix
 *  5)     se e' una parentesi aperta la inserisce nello stack
 *  6)     se e' una parentesi chiusa:
 *  7)         estrae gli operatori dallo stack fino a che non trova una parentesi aperta e li inserisce in postfix
 *  8)         elimina la parentesi aperta dallo stack
 *  9)     se e' un operatore:
 * 10)         estrae gli operatori di priorita' maggiore o uguale a quello corrente dallo stack e li inserisce in postfix
 * 11)         inserisce nello stack l'operatore corrente
 */

#ifndef POSTFIX_H
#define POSTFIX_H

#include "queue.h"

void make_postfix(Queue *postfix, char *infix);

#endif