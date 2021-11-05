/* main.c */

/* Legge nomi e cognomi da un file di testo (max 10 righe).
 * Crea una Person e la aggiunge ad un vettore.
 * Infine stampa la lista di Persons
*/

#include <stdio.h>
#include <string.h>
#include "person.h"
#include "safeString.h"

#define LINE_LEN 1024
#define LINES_MAX 10
#define BUF_LEN 80

int leggi_persone(Person * const p, const int size);
void stampa_persone(const Person * const p, const int size);

int main(void)
{
  Person p[LINES_MAX];
  int nPersone = 0;

  nPersone = leggi_persone(p, LINES_MAX);
  stampa_persone(p, nPersone);

  return 0;
}

int leggi_persone(Person * const p, const int size)
{
  char line[LINE_LEN] = "";
  char *token = '\0';
  char firstname[BUF_LEN] = "";
  char lastname[BUF_LEN] = "";
  int nPersone = 0;

  printf("Lettura dei contatti...");
  safeString_input(line, LINE_LEN);
  while (nPersone < LINES_MAX && line[0] != '\0') {
    token = strtok(line, ";");
    safeString_copy(firstname, token, BUF_LEN);

    token = strtok(NULL, ";");
    safeString_copy(lastname, token, BUF_LEN);

    p[nPersone] = person_make(firstname, lastname);
    nPersone++;

    safeString_input(line, LINE_LEN);
  }
  puts("Fatto\n");

  return nPersone;
}

void stampa_persone(const Person * const pp, const int size)
{
  int i;

  puts("Lista contatti:");
  for (i = 0; i < size; i++) {
    person_print(pp+i);
  }
}