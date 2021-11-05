/* player.h */

#ifndef PLAYER_H
#define PLAYER_H

#define PLAYER_NAME_MAX_LEN 24

struct player {
  char name[PLAYER_NAME_MAX_LEN];
  int score;
};
typedef struct player Player;

Player player_make(const char * const name);
void player_updateScore(Player * const player, const int scoreToAdd);

#endif