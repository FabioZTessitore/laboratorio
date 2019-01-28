/* main.c */

#include <stdio.h>
#include <string.h>
#include "person.h"
#include "utils.h"

#define LINE_LEN 1024
#define LINES_MAX 10
#define BUF_LEN 80

int main()
{
  char line[LINE_LEN];
  char *token;
  char firstName[BUF_LEN];
  char lastName[BUF_LEN];
  Person p[LINES_MAX];
  int nPersone = 0;
  int i = 0;

  puts("Lettura dei contatti\n");

  strSafeInput(line, LINE_LEN);
  while (i < LINES_MAX && line[0] != '\0') {
    token = strtok(line, ";");
    strSafeCopy(firstName, token, BUF_LEN);

    token = strtok(NULL, ";");
    strSafeCopy(lastName, token, BUF_LEN);

    p[i] = person_make(firstName, lastName);
    i++;

    strSafeInput(line, LINE_LEN);
  }
  nPersone = i;

  puts("Lista contatti:");
  for (i = 0; i < nPersone; i++) {
    person_print(&p[i]);
  }

  return 0;
}
