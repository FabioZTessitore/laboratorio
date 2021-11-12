/* all_float.c */

/* Allocazione dinamica */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float *p;

    p = (float *) malloc( sizeof(float) );
    if (!p) {
        fprintf(stderr, "Impossibile allocare memoria\n");
        exit(-1);
    }

    *p = 5.6;

    printf("float value: %f\n", *p);

    free(p);

    return 0;
}