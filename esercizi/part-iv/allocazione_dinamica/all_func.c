/* all_func.c */

/* Allocazione dinamica */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *input_stringa_1(void);
void input_stringa_2(char **dst);

int main(void)
{
    char *dst_str = "";
    
    dst_str = input_stringa_1();

    printf("dst_str: \"%s\"\n", dst_str);

    free(dst_str);


    input_stringa_2(&dst_str);

    printf("dst_str: \"%s\"\n", dst_str);

    free(dst_str);

    return 0;
}

char *input_stringa_1()
{
    char buffer[1024] = "";
    int len = 0;
    char *dst;

    printf("Dimmi qualcosa: ");
    fgets(buffer, 1024, stdin);
    buffer[1023] = '\0';

    len = strlen(buffer);
    if (len > 0 && buffer[len-1] == '\n') {
        buffer[len-1] = '\0';
        len--;
    }

    dst = (char *) malloc( len+1 );
    if (!dst) {
        fprintf(stderr, "Impossibile allocare memoria\n");
        exit(-1);
    }

    strcpy(dst, buffer);

    return dst;
}

void input_stringa_2(char **dst)
{
    char buffer[1024] = "";
    int len = 0;

    printf("Dimmi qualcosa: ");
    fgets(buffer, 1024, stdin);
    buffer[1023] = '\0';

    len = strlen(buffer);
    if (len > 0 && buffer[len-1] == '\n') {
        buffer[len-1] = '\0';
        len--;
    }

    *dst = (char *) malloc( len+1 );
    if (!*dst) {
        fprintf(stderr, "Impossibile allocare memoria\n");
        exit(-1);
    }

    strcpy(*dst, buffer);
}