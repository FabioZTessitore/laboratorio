Eco


#### Eco

Dopo quanto ci siamo detti sulla funzione `getchar()` possiamo scrivere un
programma che ristampa quanto inserito dall'utente.

```c
#include <stdio.h>

int main()
{
  /* per un singolo carattere
    meglio usare il tipo 'int' */
  int c;

  printf("Dimmi qualcosa: ");
  /* Dopo aver premuto INVIO legge i
    caratteri dal buffer e li ristampa
  */
  while ( (c = getchar()) != '\n' ) {
    putchar(c);
  }
  /* Il newline non viene stampato
    nel ciclo */
  putchar('\n');

  return 0;
}
```

##### Leggere un file come flusso di caratteri

Invece di inserire ogni volta il testo, possiamo scrivere un file
e poi utilizzare la redirezione dell'input per fare in modo che il nostro
programma legga dal file invece che dalla tastiera.

L'unica modifica che dovrebbe essere fatta è quella di aggiungere un controllo
per verificare che non si sia raggiunta la fine del file (**End Of File, EOF**).

Il ciclo diventa:

```c
while ( (c = getchar()) != '\n' && c != EOF ) {
  putchar(c);
}
```

Crea un file di testo:

> testo.txt

```
Ciao a tutti
```

Manda in esecuzione e ricordati della redirezione dell'input:

```
$ ./eco < testo.txt
Dimmi qualcosa: Ciao a tutti
```

Questo programma legge solo la prima riga del file di testo.
Come lo si potrebbe modificare affinché legga tutto il file?

<a href="/activities/2">Torna alla Parte II</a>
