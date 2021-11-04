/* main.c */

/* Legge nomi e cognomi da una file di testo (max 10 righe).
 * Crea una Person e la aggiunge ad un vettore.
 * Infine stampa la lista di Person
*/

#include <stdio.h>
#include <string.h>
#include "person.h"
#include "utils.h"

#define LINE_LEN 1024
#define LINES_MAX 10
#define BUF_LEN 80

int main(void)
{
  char line[LINE_LEN] = "";
  char *token = '\0';
  char firstName[BUF_LEN] = "";
  char lastName[BUF_LEN] = "";
  Person p[LINES_MAX];
  int nPersone = 0;
  int i;

  printf("Lettura dei contatti...");
  strSafeInput(line, LINE_LEN);
  nPersone = 0;
  while (nPersone < LINES_MAX && line[0] != '\0') {
    token = strtok(line, ";");
    strSafeCopy(firstName, token, BUF_LEN);

    token = strtok(NULL, ";");
    strSafeCopy(lastName, token, BUF_LEN);

    p[nPersone] = person_make(firstName, lastName);
    nPersone++;

    strSafeInput(line, LINE_LEN);
  }
  puts("Fatto\n");

  puts("Lista contatti:");
  for (i = 0; i < nPersone; i++) {
    person_print(&p[i]);
  }

  return 0;
}
