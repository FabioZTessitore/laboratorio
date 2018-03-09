# Python e NCurses

![](../../images/people/tess.png): Sig. Tazza, le mostro come scrivere
un programma che fa uso delle NCurses in Python.

Inizi con l'importare la libreria:

```py
import curses  # si, non c'e' la n
```

![](../../images/people/tazza.png): Ci sono sempre le funzioni `initscr()` e
`endwin()`?

![](../../images/people/tess.png): Certo, ma stavolta si trovano nel modulo
`curses` che ha importato. Quindi dovrà scrivere:

```py
import curses

curses.initscr()    # inizializza
curses.curs_set(0)  # spegne il cursore

curses.endwin()
```

C'è, però, una differenza importante. Lo standard screen viene creato
da `initscr()` e deve essere lei a memorizzarne un riferimento:

```py
stdscr = curses.initscr()
```

![](../../images/people/tess.png): Un'altra differenza importante.
All'interno dell'oggetto `stdscr` c'è un'unica funzione per l'output: `addstr()`

```py
import curses

# inizializza e memorizza un riferimento allo standard screen
stdscr = curses.initscr()

# spegne il cursore
curses.curs_set(0)

# getmaxyx() ritorna una tupla!
(ROWS, COLS) = stdscr.getmaxyx()

# La versione Python delle NCurses semplifica le cose riguardo all'output.
# Esiste solo la funzione addstr()
stdscr.addstr(5, 5, "Hello World")
stdscr.addstr(7, 5, "Sto scrivendo in un terminale di dimensioni: ")
stdscr.addstr(9, 5, "Righe: " + str(ROWS) + "; Colonne: " + str(COLS))
stdscr.addstr(12, 5, "Premi un taso per terminare")
stdscr.refresh()

stdscr.getch()

curses.endwin()
```

Torna a [Introduzione alle librerie NCurses](../summary.md)

Oppure [continua a leggere](esercizi.md)
