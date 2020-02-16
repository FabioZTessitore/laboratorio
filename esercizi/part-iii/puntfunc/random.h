/* random.h */

/* libreria per la generazione di numeri pseudocasuali */

#ifndef RANDOM_H
#define RANDOM_H

/* random_init() inizializza il seme, da richiamare prima di utilizzare
 * le altre funzioni del modulo */
void random_init(void);

/* random_between(): genera un intero compreso tra min (incluso) e max (escluso) */
int random_between(const int min, const int max);

#endif
