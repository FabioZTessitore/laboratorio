# Le librerie NCurses

![](../../images/people/tess.png): Caro Sig. Tazza, torniamo al nostro
amato terminale, però voglio farle una sorpresa.
Sapeva che i terminali possono essere gestiti in modalità semigrafica?

![](../../images/people/tazza.png): Modalità semigrafica? Cosa intende?

![](../../images/people/tess.png): In modalità semigrafica può stampare
i caratteri in vari colori,
con attributi quali il sottolineato o il grassetto.
Inoltre, può stampare in qualunque posizione sullo schermo.

Il problema con i terminali è che tutte queste operazioni risultano
difficoltose (e anche noiose). Inoltre non tutti i terminali sono uguali
e ciò che funziona su uno potrebbe non funzionare su un altro.

![](../../images/people/tazza.png): E come risolviamo?

![](../../images/people/tess.png): Per questo le presento le librerie *NCurses*
(New Curses). Esse nascondono le difficoltà che le accennavo mettendo a disposizione
delle funzioni più semplici e indipendenti dal terminale.

Prima di iniziare si accerti di aver installato il pacchetto `libncurses5-dev`:

```
$ sudo apt-get install libncurses5-dev
```

## Hello World NCurses

![](../../images/people/tess.png): Quando vuole usare le librerie NCurses
deve innanzitutto ricordarsi di iniziare il programma con una chiamata
alla funzione `initscr()` in modo da passare il terminale in modalità
semigrafica.

Prima di uscire, una chiamata a `endwin()` riporterà il terminale alla
situazione iniziale.

Ovviamente non dimentichi di includere il file di intestazione `ncurses.h`:

```c
/* hello.c */

#include <ncurses.h>

int main()
{
  /* inizializza */
  initscr();

  /* prima di terminare un programma ncurses e' meglio
   * chiamare la funzione endwin() altrimenti il terminale
   * potrebbe non funzionare correttamente.
   */
  endwin();

  return 0;
}
```

![](../../images/people/tess.png):  Per la compilazione
ed esecuzione esegua questi comandi. Sono gli stessi
che già conosce a cui è stata aggiunta la libreria ncurses
in fase di link:

```
$ gcc -c hello.c -o hello.o
$ gcc hello -o hello.o -lncurses
$ ./hello
```

### Attendere un tasto

![](../../images/people/tess.png): Probabilmente non avrà
visto molto perché il programma termina immediatamente.
Possiamo chiedere di attendere un tasto con `getch()`:

```c
/* hello.c */

#include <ncurses.h>

int main()
{
  /* inizializza */
  initscr();

  /* per evitare che il programma termini immediatamente
   * attende un tasto
   */
  getch();

  /* ripristina il normale funzionamento del terminale */
  endwin();

  return 0;
}
```

### Stampare una stringa

![](../../images/people/tess.png): Per stampare una stringa
con le librerie NCurses può usare `printw()`.

Deve avere, però, un'accortenza.

Quando si stampa a video con le NCurses,
il testo non compare direttamente sullo schermo.
Viene, invece, stampato su uno schermo virtuale.
La funzione refresh() copia lo schermo virtuale
su quello fisico. In questo modo si possono fare tante modifiche e poi visualizzarle tutte insieme.

Ecco il programma completo:

```c
/* hello.c */

/* Introduzione alle librerie NCurses */

#include <ncurses.h>

int main()
{
  /* inizializza */
  initscr();

  /* printw() e' equivalente a printf().
   * Altre funzioni per la stampa sono:
   * addch() - stampa un carattere, equivalente a putchar()
   * addstr() - equivalente a puts()
   */
  printw("Hello, NCurses\n");
  printw("Premi un tasto per uscire");

  /* Copia lo schermo virtuale su quello fisico */
  refresh();

  /* attende un tasto */
  getch();

  /* ripristina il normale funzionamento del terminale */
  endwin();

  return 0;
}
```

Torna a [Introduzione alle librerie NCurses](../summary.md)
