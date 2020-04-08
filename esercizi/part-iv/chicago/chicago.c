/* chicago.c */

#include "chicago.h"
#include "player.h"
#include "dado.h"

int chicago_roll(void);
void chicago_round(Player players[], const int numPlayers, const int minValue);

void chicago_init(void)
{
    dado_init();
}

void chicago_run(Player players[], const int numPlayers)
{
    int minScore = 2;
    while (minScore <= 12) {
        chicago_round(players, numPlayers, minScore);
        minScore++;
    }
}

void chicago_round(Player players[], const int numPlayers, const int minValue)
{
    int i;
    int result;

    for (i = 0; i < numPlayers; i++) {
        result = chicago_roll();

        if (result >= minValue) {
            player_updateScore(&(players[i]), result);
        }
    }
}

int chicago_roll(void)
{
    return dado_roll() + dado_roll();
}