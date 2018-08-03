/* coin.h */

#ifndef COIN_H
#define COIN_H

/* Lancio di una moneta */

/* coin_init(): inizializza il modulo */
void coin_init();

/* coin_flip(): lancio di una moneta */
int coin_flip();

/* coin_trial():  simulazione del lancio di una moneta
 *
 * parametri:
 *  trials:  numero di lanci
 *
 * restituisce il numero di Head o Tail
 */
int coin_trial(int trials);

#endif
