La funzione getchar()


#### La funzione getchar()

Il linguaggio C mette a disposizione una interessante funzione per l'input.
Si tratta di `getchar()`. Come il nome lascia intuire serve per ottenere
caratteri in input.

Proviamo a scrivere un programma di esempio:

```c
#include <stdio.h>

int main()
{
  /* per un singolo carattere
    meglio usare il tipo 'int' */
  int c;

  printf("Inserisci un carattere: ");
  c = getchar();

  printf("Hai inserito il carattere: %c\n", c);

  return 0;
}
```

Se mandi in esecuzione questo codice ti sarai accorto che dopo aver digitato
il carattere è necessario premere `INVIO` affinché il programma proceda.

Inoltre nulla vieta all'utente di inserire più di un carattere. E dove
finiscono gli altri caratteri inseriti? (In effetti, anche quando pensi di inserire
un solo carattere ne stai immettendo due perché c'è l'`INVIO`).

Proviamo allora un altro esperimento. Chiediamo l'input di un carattere
tre volte e quando ci verrà richiesto digiteremo `h` `i` `INVIO`.

```c
#include <stdio.h>

int main()
{
  /* per un singolo carattere
    meglio usare il tipo 'int' */
  int c1, c2, c3;

  printf("Inserisci un carattere: ");
  c1 = getchar();

  printf("\nInserisci un altro carattere: ");
  c2 = getchar();

  printf("\nInserisci il terzo carattere: ");
  c3 = getchar();

  printf("\n\nHai inserito i caratteri:\n");
  printf("c1: %c\n", c1);
  printf("c2: %c\n", c2);
  printf("c3: %c\n", c3);

  return 0;
}
```

Manda in esecuzione e immetti due caratteri seguiti da `INVIO` (ad esempio
il saluto `h` `i` `INVIO`).

Qui succede qualcosa di interessante. Solo la prima volta il programma resta
in attesa dell'input. Le successive due chiamate a `getchar()` vengono gestite
automaticamente.

In altre parole, ciò che inserisci la prima volta
(la sequenza di caratteri `h`, `i` e `INVIO`)
viene memorizzato in un buffer e `getchar()` non fa altro che andare a prendere
l'input da quel buffer. La prima volta lo trova vuoto e chiede all'utente.
Le volte successive legge i caratteri rimanenti.

##### Lettura di tre caratteri in input

Da quanto detto, emerge che usando `getchar()` dobbiamo essere in grado
di gestire il buffer di input.

Il programma precedente, rifatto in modo tale da svuotare il buffer dopo
ogni lettura (in modo da permettere l'inserimento successivo), diventa:

```c
#include <stdio.h>

int main()
{
  /* per un singolo carattere
    meglio usare il tipo 'int' */
  int c1, c2, c3;
  int temp;

  printf("Inserisci un carattere: ");
  c1 = getchar();
  /* svuota il buffer */
  if (c1 != '\n') {
    while ( (temp = getchar()) != '\n' )
      ;
  }

  printf("\nInserisci un altro carattere: ");
  c2 = getchar();
  /* svuota il buffer */
  if (c2 != '\n') {
    while ( (temp = getchar()) != '\n' )
      ;
  }

  printf("\nInserisci il terzo carattere: ");
  c3 = getchar();
  /* svuota il buffer */
  if (c3 != '\n') {
    while ( (temp = getchar()) != '\n' )
      ;
  }

  printf("\n\nHai inserito i caratteri:\n");
  printf("c1: %c\n", c1);
  printf("c2: %c\n", c2);
  printf("c3: %c\n", c3);

  return 0;
}
```

##### Svuotare il buffer di input

Le seguenti righe di codice meritano un chiarimento:

```c
if (c1 != '\n') {
  while ( (temp = getchar()) != '\n' )
    ;
}
```

Si sarebbero dovute scrivere in questo modo:

```c
/* se hai inserito effettivamente un carattere,
  c1 sara' diverso da newline, quindi legge il prossimo.
*/
if (c1 != '\n') {
  temp = getchar();

  /* finche' non trova il newline
    continua a leggere dal buffer (svuotandolo)
  */
  while (temp != '\n') {
    temp = getchar();
  }
}
```

Il C, però, permette una riscrittura più agevole del codice
(una volta che ci si è abituati!). Infatti ogni volta che si
fa un'assegnazione con l'operatore `=`, **l'operazione stessa
di assegnamento vale il valore assegnato**.

Ad esempio:

```c
n = 3;

/* n vale 3,
ma tutta l'operazione (n = 3)
ha un valore, che è proprio
il valore assegnato, cioè 3
*/
```

Nell'esempio di prima si sfrutta questa caratteristica del
linguaggio per portare l'istruzione `temp = getchar()`
all'interno  del ciclo `while` e confrontare il valore
dell'assegnazione (che è proprio il valore letto) con il carattere
`\n`:

```c
while ( (temp=getchar()) != '\n' ) {
  /* qui non fare niente */
}
```

Inoltre sono state eliminate le parentesi graffe, visto che all'interno
del ciclo non ci sono istruzioni. Va inserito, però, almeno un `;` perché
il ciclo `while` vuole un'istruzione (il `;` si chiama anche *istruzione nulla*).

<a href="/activities/2">Torna alla Parte II</a>
