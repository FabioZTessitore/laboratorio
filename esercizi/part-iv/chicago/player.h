/* player.h */

#ifndef PLAYER_H
#define PLAYER_H

struct player {
    char name[80];
    int score;
};

typedef struct player Player;

Player player_make(const char * const name);

void player_updateScore(Player * const player, const int scoreToAdd);

#endif