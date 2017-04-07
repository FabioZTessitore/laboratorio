La libreria matematica del C


#### La libreria matematica del C

Per utilizzare le funzioni della libreria matematica in C devi includere
il file `math.h`, ma non basta.

Così come hai fatto con le librerie `ncurses` devi indicare la libreria
in fase di link con `-lm`.

##### Calcolo della radice quadrata

> radice.c

```c
/* radice.c */

/* calcolo della radice quadrata mediante
 * funzioni della libreria matematica
 */

#include <stdio.h>

/* per utilizzare le funzioni della libreria
 * matematica e' necessario includere il
 * file di intestazione math.h.
 *
 * Ma non basta!
 *
 * La libreria vera e propria viene aggiunta
 * in fase di link, vedi il file Makefile
 */
#include <math.h>

int main()
{
  double num = 2.;

  printf("La radice quadrata di %f e' %f\n", num, sqrt(num));

  return 0;
}
```

> Makefile

```
CC=gcc
CFLAGS=-Wall -ansi -pedantic
LDFLAGS=-lm
```

<a href="/activities/2">Torna alla Parte II</a>
