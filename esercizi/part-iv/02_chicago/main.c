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

int input_players(Player players[], const int maxPlayers);
void print_score(const Player players[], const int numPlayers);

int main(void)
{
  Player players[MAXPLAYERS];
  int numPlayers = 0;

  chicago_init();

  puts("Chicago\n\n");

  numPlayers = input_players(players, MAXPLAYERS);

  chicago_run(players, numPlayers);

  print_score(players, numPlayers);

  return 0;
}

int input_players(Player players[], const int maxPlayers)
{
  int numPlayers = 0;
  char playerNameBuffer[80];
  int otherPlayers = 's';
  int temp;

  do {
    printf("Giocatore #%d: ", numPlayers+1);
    strSafeInput(playerNameBuffer, 80);
    players[numPlayers] = player_make(playerNameBuffer);
    numPlayers++;

    /* altri giocatori? s o n */
    if (numPlayers < maxPlayers) {
      do {
        printf("Altri giocatori (s o n)?: ");
        otherPlayers = getchar();

        if (otherPlayers != '\n') {
          /* clear the buffer */
          while ((temp=getchar()) != '\n')
            ;
        }
      } while (otherPlayers != 's' && otherPlayers != 'n');
    }
  } while (otherPlayers == 's' && numPlayers < maxPlayers);

  return numPlayers;
}

void print_score(const Player players[], const int numPlayers)
{
  int i;

  for (i = 0; i < numPlayers; i++) {
    printf("%-24s%5d\n", players[i].name, players[i].score);
  }
}