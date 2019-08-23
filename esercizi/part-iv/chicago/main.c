/* main.c */

/* Simulazione del gioco di dadi Chicago */

/* Istruzioni di compilazione ed esecuzione:
 *
 * $ make
 * $ ./chicago
 */

#include <stdio.h>
#include "chicago.h"
#include "player.h"
#include "utils.h"

#define MAXPLAYERS 10

int main()
{
  Player players[MAXPLAYERS];
  int numPlayers = 0;

  int minScore = 2;

  char playerNameBuffer[80];

  int otherPlayers = 'y';
  int temp;

  int i;

  chicago_init();

  puts("Chicago\n\n");

  do {
    printf("Giocatore #%d: ", numPlayers+1);
    strSafeInput(playerNameBuffer, 80);
    players[numPlayers] = player_make(playerNameBuffer);
    numPlayers++;

    /* altri giocatori? s o n */
    do {
      printf("Altri giocatori (s o n)?: ");
      otherPlayers = getchar();

      if (otherPlayers != '\n') {
        /* clear the buffer */
        while ((temp=getchar()) != '\n')
          ;
      }
    } while (otherPlayers != 's' && otherPlayers != 'n');

  } while (otherPlayers == 's' && numPlayers < MAXPLAYERS);

  /* start the game */
  while (minScore <= 12) {
    chicago_turno(players, numPlayers, minScore);
    minScore++;
  }

  for (i = 0; i < numPlayers; i++) {
    printf("%-20s%5d\n", players[i].name, players[i].score);
  }

  return 0;
}