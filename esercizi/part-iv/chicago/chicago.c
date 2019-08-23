/* chicago.c */

#include "chicago.h"
#include "dado.h"
#include "player.h"

int chicago_roll_dice();

void chicago_init()
{
    dado_init();
}

void chicago_turno(Player players[], const int numPlayers, const int minValue)
{
    int i;
    int result;

    for (i = 0; i < numPlayers; i++) {
        result = chicago_roll_dice();

        if (result >= minValue) {
            player_updateScore(&(players[i]), result);
        }
    }
}

int chicago_roll_dice()
{
    return dado_roll() + dado_roll();
}