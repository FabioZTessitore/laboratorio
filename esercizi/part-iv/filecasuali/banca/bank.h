/* bank.h */

#ifndef BANK_H
#define BANK_H

#include <stdio.h>

#define BANK_CLIENTS_MAX 100

struct bank {
    char *filename;
    FILE *f_clients;
};
typedef struct bank Bank;

void bank_init(Bank * const bank, char * const filename);
void bank_close(const Bank * const bank);
void bank_showAll(const Bank * const bank);
void bank_showZero(const Bank * const bank);
void bank_showNegative(const Bank * const bank);
void bank_showPositive(const Bank * const bank);
void bank_updateClient(const Bank * const bank);
void bank_update(Bank * const bank);

#endif