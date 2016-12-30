/* puntatori.c */

/* Mostra come creare puntatori a variabili intere, float e double */

/* Istruzioni per la compilazione e l'esecuzione:
 *
 * Compilare:
 * $ gcc -c puntatori.c -o puntatori.o
 *
 * Link:
 * $ gcc puntatori.o -o puntatori
 *
 * Eseguire:
 * $ ./puntatori
 */

 #include <stdio.h>

int main()
{
  int num_i = 42;       /* una variabile intera */
  float num_f = 42.0;   /* una variabile float */
  double num_d = 42.0;  /* una variabile double */

  /* puntatori */
  int *p_num_i;           /* puntatore a variabile intera */
  float *p_num_f;         /* puntatore a variabile float */
  double *p_num_d;        /* puntatore a variabile double */

  /* assegnazioni */
  p_num_i = &num_i;
  p_num_f = &num_f;
  p_num_d = &num_d;

  /* stampe, utilizza i puntatori, non c'e' l'operatore & */
  printf("Indirizzo di num_i: %p\n", p_num_i);
  printf("Indirizzo di num_f: %p\n", p_num_f);
  printf("Indirizzo di num_d: %p\n", p_num_d);

  return 0;
}
