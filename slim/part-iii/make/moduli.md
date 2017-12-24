Dividere il programma in moduli


#### Dividere il programma in moduli

Abbiamo visto che se vogliamo scrivere programmi poco più che banali dobbiamo
creare delle funzioni in modo da astrarre e nascondere i dettagli.

Il prossimo passo è quello di suddividere il programma in varie parti. Ogni parte,
o **modulo**, conterrà un insieme di funzioni correlate.

Siccome quando scriviamo una funzione in C dobbiamo prima scriverne il
prototipo, per ogni modulo avremo generalmente due file. Un *file di
intestazione* con estensione `.h` e un file con il codice delle funzioni con
estensione `.c`.

Nel file di intestazione troveranno posto i prototipi delle funzioni e gli
eventuali simboli messi a disposizione dal modulo. In questo modo, leggendo
il file `.h` possiamo sapere che tipo di operazioni possiamo effettuare
con quel modulo senza andare a vedere il codice vero e proprio delle funzioni.

Per fare un esempio, immagina di voler raccogliere in un modulo alcune funzioni
che calcolano l'area di figure piane. Chiamiamolo `geom`. Allora i file da creare
sono `geom.h` e `geom.c`.

Nel file `geom.h` definiamo un simbolo, pi greco:

```c
#define PI 3.141592654
```

e inseriamo alcuni prototipi di funzione. Siccome fanno tutte parte del modulo
`geom` è buona abitudine far iniziare i nomi con `geom_`:

```c
double geom_area_quadrato(double lato);
double geom_area_cerchio(double raggio);
double geom_area_rettangolo(double lato1, double lato2);
```

Nel file `geom.c` definiamo le funzioni e per indicare al compilatore dove
stanno i prototipi, includiamo il corrispondente file di intestazione:

```c
/* include il file geom.h
 * le virgolette indicano che il file
 * si trova nella directory corrente */
#include "geom.h"

double geom_area_quadrato(double lato)
{
  return lato * lato;
}

double geom_area_cerchio(double raggio)
{
  return PI * raggio * raggio;
}

double geom_area_rettangolo(double lato1, double lato2)
{
  return lato1 * lato2;
}
```

Per usare il modulo `geom` scriviamo un file `main.c`:

```c
#include <stdio.h>
#include "geom.h"

int main()
{
  ...

  /* invoca le funzioni del modulo geom */
  geom_area_quadrato(5.);

  return 0;
}
```

##### Il problema della doppia inclusione

Forse non ti sarà sfuggito che il file `geom.h` viene incluso due volte.
La prima dal file `geom.c` e la seconda dal file `main.c`. Ovviamente il
compilatore protesterà dicendo che si stanno ridefinendo simboli e funzioni.

Per ovviare al problema si ricorre ad un trucchetto basato sul funzionamento
del preprocessore.

Il preprocessore elabora i file prima del compilatore e una delle cose che fa
è andare alla ricerca delle direttive `#define`. Quando ne incontra una, effettua
delle sostituzioni. Ad esempio, nel nostro caso, il simbolo `PI` viene sostituito
dal valore `3.141592654` in tutto il codice. In altre parole è come se nel
codice avessimo scritto il numero invece del simbolo con il vantaggio di
avere il valore definito in un solo punto ma senza il costo legato alla creazione
di una variabile.

Sapendo ciò, nel file `geom.h` creiamo un simbolo e lo usiamo per capire se
il file è già stato incluso in precedenza o meno:

> geom.h

```
#ifndef GEOM_H
#define GEOM_H

/* contenuto di geom.h */

#endif
```

La prima volta che si include il file `geom.h` il simbolo `GEOM_H` non è stato
ancora definito e quindi `#ifndef GEOM_H` (if not defined) dirà `True` permettendo
l'ingresso (con relativa definizione di `GEOM_H`). Le volte successive il simbolo `GEOM_H` sarà stato definito e l'`ifndef`
dirà `False` facendo saltare tutto il contenuto del file.

##### Makefile

Il `Makefile` sarà:

```
CC=gcc
CFLAGS=-Wall -ansi -pedantic
LDLIBS=

geometria: main.o geom.o

main.o: main.c

geom.o: geom.c geom.h

.PHONY: clean
clean:
  rm -f *.o geometria
```

<a href="/activities/3">Torna alla Parte III</a>
