/* aree.c */

/* Calcola aree di figure piane */

/* Istruzioni per la compilazione ed esecuzione:
 *
 * $ make aree
 * $ ./aree
 */

#include <stdio.h>

int menu(void);

double area_quadrato(double lato);
double area_cerchio(double raggio);

int main()
{
  int scelta;
  double raggio, lato;

  puts("Calcola l'area di figure geometriche");

  scelta = menu();

  switch(scelta) {
    case 1:
      do {
        printf("Inserisci il lato del quadrato: ");
        scanf("%lf", &lato);
      } while (lato < 0.);
      printf("Area del quadrato: %.2f\n", area_quadrato(lato));
      break;
    case 2:
      do {
        printf("Inserisci il raggio del cerchio: ");
        scanf("%lf", &raggio);
      } while (raggio < 0.);
      printf("Area del cerchio: %.2f\n", area_cerchio(raggio));
      break;
    default:
      /* scelta non valida */
      break;
  };

  return 0;
}

int menu(void)
{
  int scelta;

  do {
    printf("\nScegli la figura geometrica:\n"
        "1) Quadrato\n"
        "2) Cerchio\n"
        "Scegli: ");
    scanf("%d", &scelta);
  } while (scelta<1 || scelta>2);
  
  return scelta;
}

double area_cerchio(double raggio)
{
  return 3.141592654 * raggio * raggio;
}

double area_quadrato(double lato)
{
  return lato * lato;
}
