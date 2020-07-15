/* random.h */

#ifndef RANDOM_H
#define RANDOM_H

/* libreria per la generazione di numeri pseudocasuali */

/* random_init() inizializza il seme, da richiamare prima di utilizzare
 * le altre funzioni del modulo */
void random_init(void);

/* random_between(): genera un intero compreso tra min (incluso) e max (escluso) */
int random_between(int min, int max);

#endif
