/* player.c */

#include "player.h"
#include "safeString.h"

Player player_make(const char * const name)
{
  Player p;

  safeString_copy(p.name, name, PLAYER_NAME_MAX_LEN);
  p.score = 0;

  return p;
}

void player_updateScore(Player * const player, const int scoreToAdd)
{
  player->score += scoreToAdd;
}