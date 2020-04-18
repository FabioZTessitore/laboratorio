/* all_parole.c */

/* Allocazione dinamica */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **lista_parole(char *str);

int main(void)
{
    char **parole = NULL;
    int i;

    parole = lista_parole("ciao;a;tutti;hello;world");
    
    i = 0;
    while (*(parole+i) != NULL) {
        puts(*(parole+i));
        i++;
    }

    i = 0;
    while (*(parole+i) != NULL) {
        free(*(parole+i));
        i++;
    }
    free(parole);

    return 0;
}

char **lista_parole(char *str)
{
    /* al max 10 parole */
    char **parole = (char **) malloc( 10*sizeof(char *) );
    int i;

    char *buffer;

    /* richiesto da strtok */
    char src_str[80];
    strncpy(src_str, str, 80);
    src_str[79] = '\0';

    for (i = 0; i < 10; i++) {
        *(parole+i) = NULL;
    }

    i = 0;
    buffer = strtok(src_str, ";");
    while (buffer != NULL && i < 10) {
        *(parole+i) = (char *) malloc( strlen(buffer)+1 );
        strcpy(*(parole+i), buffer);
        i++;

        buffer = strtok(NULL, ";");
    }

    return parole;
}