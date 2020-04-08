/* player.c */

#include "player.h"
#include "utils.h"

Player player_make(const char * const name)
{
    Player p;

    strSafeCopy(p.name, name, PLAYER_NAME_MAX_LEN);
    p.score = 0;

    return p;
}

void player_updateScore(Player * const player, int scoreToAdd)
{
    player->score += scoreToAdd;
}