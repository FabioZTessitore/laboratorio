# rimbalzo2D-3-vett-py.py

# rimbalzo di tre caratteri sullo schermo per 30 sec

import curses
import time

# caratteri da stampare
ch = [ '*', '#', '@' ]
NCAR = len(ch)

# posizione, riga e colonna.
# floating point per tenere memoria delle posizioni intermedie,
# verranno arrotondati a int in fase di stampa
row = [ 3., 9., 2. ]
col = [ 3., 7., 18. ]

# velocita'
vel_r = [ 10, 5, 15 ]
vel_c = [ 10, 5, 20 ]
direz_r = [1, 1, 1]
direz_c = [1, 1, 1]

FPS = 30
dt = 1. / float(FPS);

# durata animazione
anim_length = 0.
durata = 30.  # 30 sec

screen = curses.initscr()
curses.curs_set(0)

# inizio animazione
start_anim = time.time()

# continua fino a 30 sec
while anim_length < durata:
    # istante iniziale
    start = time.time()

    # calcola dimensione del terminale
    (ROWS, COLS) = screen.getmaxyx()

    # pulisce vecchia posizione
    for i in range(NCAR):
        if int(row[i]) < ROWS and int(col[i]) < COLS:
            screen.addch(int(row[i]), int(col[i]), ' ')

    # calcola nuova posizione
    for i in range(NCAR):
        col[i] += direz_c[i] * vel_c[i] * dt
        if int(col[i]) >= COLS:
            col[i] = COLS-1
            direz_c[i] = -direz_c[i]
        elif int(col[i]) < 0:
            col[i] = 0
            direz_c[i] = -direz_c[i]

        row[i] += direz_r[i] * vel_r[i] * dt
        if int(row[i]) >= ROWS:
            row[i] = ROWS-1
            direz_r[i] = -direz_r[i]
        elif int(row[i]) < 0:
            row[i] = 0
            direz_r[i] = -direz_r[i]

    # stampa
    for i in range(NCAR):
        if int(row[i]) < ROWS and int(col[i]) < COLS:
            screen.addch(int(row[i]), int(col[i]), ch[i])

    screen.refresh()

    # istante finale
    end = time.time()

    # calcola ritardo
    ritardo = dt - (end - start)
    time.sleep(ritardo)

    anim_length = end - start_anim

curses.endwin()
