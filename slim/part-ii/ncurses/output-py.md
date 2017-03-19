Python e NCurses


#### Python e NCurses

Possiamo usare le librerie NCurses anche in Python.
Inizia con l'importare la libreria:

```py
# Attenzione, non c'e' la n
import curses
```

Ci sono sempre le funzioni `initscr()` e `endwin()`, ma stavolta si trovano
nel modulo `curses` che hai importato. Quindi dovrai scrivere:

```py
import curses

curses.initscr()    # inizializza
curses.curs_set(0)  # spegne il cursore

curses.endwin()
```

Rispetto al C c'è, però, una differenza importante.
Lo standard screen viene creato da `initscr()` e devi memorizzarne un riferimento:

```py
stdscr = curses.initscr()
```

Un'altra differenza importante, stavolta è una semplificazione:
l'oggetto `stdscr` contiene un'unica funzione per l'output: `addstr()`.

> Esempio completo

```py
import curses

# inizializza e memorizza un riferimento allo standard screen
stdscr = curses.initscr()

# spegne il cursore
curses.curs_set(0)

# getmaxyx() ritorna una tupla!
(ROWS, COLS) = stdscr.getmaxyx()

# Esiste solo la funzione addstr()
stdscr.addstr(5, 5, "Hello World")
stdscr.addstr(7, 5, "Sto scrivendo in un terminale di dimensioni: ")
stdscr.addstr(9, 5, "Righe: " + str(ROWS) + "; Colonne: " + str(COLS))
stdscr.addstr(12, 5, "Premi un taso per terminare")
stdscr.refresh()

stdscr.getch()

curses.endwin()
```

<a href="/activities/2">Torna alla Parte II</a>
