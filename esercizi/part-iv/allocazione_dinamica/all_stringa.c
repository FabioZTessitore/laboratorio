/* all_stringa.c */

/* Allocazione dinamica */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *dst_str;
    char *src_str = "Hello, World!";

    dst_str = (char *) malloc( strlen(src_str)+1 );
    if (!dst_str) {
        fprintf(stderr, "Impossibile allocare memoria\n");
        exit(-1);
    }

    strcpy(dst_str, src_str);

    printf("src_str: %s\n", src_str);
    printf("dst_str: %s\n", dst_str);

    free(dst_str);

    return 0;
}