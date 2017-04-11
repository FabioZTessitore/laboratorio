Il costrutto switch


#### Il costrutto switch

Quando una variabile può assumere uno tra *pochi valori* può convenire
utilizzare `switch` invece di `if else`.

Immagina di avere una variabile `scelta`:

```c
/* scelta vale 1, 2, 3, 4 o 5 */
int scelta = 3;
```

Il costrutto `switch` assume la forma:

```c
switch(scelta) {
  case 1:
    printf("Hai scelto la prima opzione\n");
    break;
  case 2:
    printf("Hai scelto la seconda opzione\n");
    break;
  case 3:
    printf("Hai scelto la terza opzione\n");
    break;
  case 4:
  case 5:
    printf("Hai scelto la quarta o la quinta opzione\n");
    break;
  default:
    printf("Scelta non valida. Come hai potuto?\n");
    break;
}
```

Ricorda di inserire l'istruzione `break` al termine di ogni `case`.
In caso contrario verranno eseguiti tutti i casi fino all'incontro
di un `break` come succede con i casi `4` e `5` dell'esempio.

Una buona abitudine è quella di inserire il caso `default` per
gestire casi inattesi.

<a href="/activities/2">Torna alla Parte II</a>
