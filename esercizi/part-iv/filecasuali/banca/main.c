/* main.c */

/* Scrittura di record in file ad accesso casuale */

#include "ui.h"
#include "bank.h"

int main(void)
{
    Bank bank;
    UI ui;

    bank_init(&bank, "clienti.dat");
    ui_init(&ui, &bank);

    ui_run(&ui);

    return 0;
}