Movimento di un carattere


#### Movimento di un carattere

Ora possiamo impostare una semplice animazione. Facciamo spostare un carattere
sullo schermo.

Le informazioni di cui abbiamo bisogno sono:

* il carattere da stampare
* la posizione iniziale
* la direzione in cui si muove
* la velocità di spostamento
* il numero di frame per secondo (FPS)

Prima di addentrarci nella programmazione, però, bisogna riflettere
sull'ultima informazione: il numero di FPS.

Se, ad esempio, volessimo utilizzare 10 FPS, significa che deve essere generato
e visualizzato un nuovo frame ogni 100 msec.

Il nostro programma dovrà effettuare delle operazioni (calcolo della nuova
posizione, stampa del carattere, ecc.) e quindi impiegherà un certo tempo
per farle tutte.

Il nostro compito è quello di calcolare il tempo impiegato dal sistema
per fare tutte queste operazioni e poi impostare un ritardo in modo tale
che i frame siano distanziati sempre di 100 msec.

##### Il codice

In questo esempio faremo muovere un asterisco:

```c
int ch = '*';
```

La posizione sarà indicata dal numero di riga e dal numero di colonna
(sono double per tenere memoria delle posizioni intermedie, verranno
arrotondati a int in fase di stampa):

```c
double row = 3.;
double col = 3.;
```

Immaginiamo di farlo spostare sulla riga verso destra. In altre parole
durante l'animazione bisognerà incrementare il valore di `col` lasciando
inalterato quello di `row`.

La velocità di spostamento può essere definita come il numero di colonne
percorse ogni secondo:

```c
int vel = 10; /* colonne al secondo */
```

Con 10 FPS abbiamo 100 msec di ritardo tra un frame e l'altro:

```c
int FPS = 10;
double dt = 1. / (double)FPS;
```

Il nucleo del programma sarà allora composto dalle istruzioni per la generazione
e visualizzazione del frame.

* calcola istante iniziale
* cancella il cursore alla vecchia posizione
* aggiorna la posizione del cursore
* stampa il cursore
* calcola istante finale
* calcola il tempo trascorso
* attende fino a 100 msec

```c
struct timespec start, end;
struct timespec ritardo;

/* istante iniziale */
clock_gettime(CLOCK_MONOTONIC, &start);

/* pulisce vecchia posizione */
mvaddch((int)row, (int)col, ' ');

/* calcola nuova posizione */
col += vel * dt;

/* stampa */
mvaddch((int)row, (int)col, ch);
refresh();

/* istante finale */
clock_gettime(CLOCK_MONOTONIC, &end);

/* calcola ritardo */
start_f = start.tv_sec * 1000. + start.tv_nsec / 1.e6;
end_f = end.tv_sec * 1000. + end.tv_nsec / 1.e6;
ritardo_f = dt - (end_f - start_f);
ritardo.tv_sec = (int)(ritardo_f / 1000.);
ritardo.tv_nsec = (int)()(ritardo_f - ritardo.tv_sec) * 1000. * 1000.);
nanosleep(&ritardo, NULL);
```

Se hai difficoltà puoi vedere <a href="https://github.com/FabioZTessitore/laboratorio/blob/master/esempi/part-ii/animazioni/movimento.c">il codice completo</a>

<a href="/activities/2">Torna alla Parte II</a>
