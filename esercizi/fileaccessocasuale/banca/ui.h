/* ui.h */

#ifndef UI_H
#define UI_H

#include "bank.h"

struct ui {
    Bank *bank;
};
typedef struct ui UI;

void ui_init(UI * const ui, Bank * const bank);
void ui_run(const UI * const ui);

#endif