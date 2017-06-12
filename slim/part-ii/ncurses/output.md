Le librerie NCurses


#### Le librerie NCurses

Il terminale può essere gestito anche in modalità semigrafica.
In questa modalità puoi stampare i caratteri in vari colori,
con attributi quali il sottolineato o il grassetto.
Inoltre, puoi stampare in qualunque posizione sullo schermo
indicando il numero di riga e di colonna.

Il problema con i terminali è che tutte queste operazioni risultano
difficoltose (e noiose). Inoltre non tutti i terminali sono uguali
e ciò che funziona su uno potrebbe non funzionare su un altro.

Per queste ragioni sono state sviluppate le librerie *NCurses*
(New Curses). Esse nascondono le difficoltà a cui ti accennavo
mettendo a disposizione delle funzioni più semplici e indipendenti dal terminale.

Prima di iniziare accertati di aver installato il pacchetto `libncurses5-dev`:

```
$ sudo apt install libncurses5-dev
```

##### Hello World NCurses

Quando vuoi usare le librerie NCurses devi innanzitutto ricordarti di iniziare
il programma con una chiamata alla funzione `initscr()` in modo da passare
in modalità semigrafica.

Prima di uscire, una chiamata a `endwin()` riporterà il terminale alla
situazione iniziale.

Ovviamente non dimenticare di includere il file di intestazione `ncurses.h`.

```c
/* hello.c */

#include <ncurses.h>

int main()
{
  /* inizializza */
  initscr();

  /* ripristina il normale funzionamento del terminale */
  endwin();

  return 0;
}
```

Per la compilazione ed esecuzione esegui questi comandi.
Sono gli stessi che già conosci a cui è stata aggiunta la libreria ncurses
in fase di link:

```
$ gcc -c hello.c -o hello.o
$ gcc hello.o -o hello -lncurses
$ ./hello
```

##### Attendere un tasto

Se hai provato a mandare in esecuzione il programma `hello`, non avrai
visto granché perché il programma termina immediatamente.
Possiamo chiedere di attendere un tasto con `getch()`:

```c
/* hello.c */

#include <ncurses.h>

int main()
{
  /* inizializza */
  initscr();

  /* per evitare che il programma termini
   * immediatamente, attende un tasto
   */
  getch();

  /* ripristina il normale funzionamento del terminale */
  endwin();

  return 0;
}
```

##### Stampare una stringa

Per stampare una stringa con le librerie NCurses puoi usare `printw()`,
ma con un'accortenza.

Quando si stampa a video con le NCurses,
il testo non compare direttamente sullo schermo.
Viene, invece, stampato su uno *schermo virtuale*
e la funzione `refresh()` copia lo schermo virtuale su quello fisico.
In questo modo si possono fare tante modifiche e poi visualizzarle tutte insieme.

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

<a href="/activities/2">Torna alla Parte II</a>
