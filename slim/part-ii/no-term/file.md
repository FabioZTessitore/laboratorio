Leggere e scrivere file in C


#### Leggere e scrivere file in C

Se crei un programma, diciamo `hello`, che stampa il solito saluto
`"Hello, World!"`, ti basterà utilizzare la redirezione dell'output
per stampare in un file invece che sul terminale.

```
$ ./hello > saluti
```

In questo modo stiamo sfruttando le caratteristiche
del sistema operativo per ottenere il risultato voluto e in molti casi
può essere sufficiente.

Vediamo, invece, come aprire un file dal tuo stesso programma
in modo da poter effettuare letture e scritture. Così facendo, per esempio,
potrai salvare il risultato delle operazioni.

##### Aprire e chiudere un file

Per aprire un file abbiamo a disposizione la funzione `fopen()`.

`fopen()` accetta come parametri il nome del file e il modo in cui deve aprirlo.

Tra le varie possibilità, un file può essere aperto in sola lettura o in sola scrittura.
Per il momento queste due modalità saranno sufficienti:

`"r"`, apre un file in sola lettura

`"w"`, apre un file in sola scrittura, lo crea se non esiste

Fai attenzione con il modo `"w"`. Se tenti di aprire un file già esistente,
quest'ultimo verrà azzerato..

La funzione `fopen()` restituisce un puntatore a `FILE`.

Allo stesso modo in cui con `int` crei una
variabile intera e con `int *` un puntatore a intero, con `FILE *` crei
un puntatore a `FILE`, niente di diverso.

```c
FILE *f = fopen("myfile.txt", "w");
```

Ricorda però che prima di chiudere il programma bisogna chiudere tutti i file
aperti:

```c
fclose(f);
```

##### Scrivere in un file

Una volta aperto il file possiamo scrivere
qualcosa al suo interno. Invece di usare `printf()` ti basterà usare `fprintf()`
che accetta come primo parametro il riferimento al `FILE` che hai aperto.

```c
FILE *f = fopen("myfile.txt", "w");

fprintf(f, "Hello, World!\n");

fclose(f);
```

##### Leggere da un file

Proviamo a fare l'operazione opposta, leggiamo da un file.

Per prima cosa crea un file con il tuo editor di testi preferito
e scrivici dentro un numero, ad esempio intero:

> myfile.txt

```
42
```

A questo punto apri il file in lettura e utilizzando `fscanf()` leggi
quel valore.

```c
int num = 0;
FILE *f = fopen('myfile.txt', 'r');

fscanf(f, "%d", &num);
printf("Ho letto il valore %d\n", num);

fclose(f);
```

##### Lo standard output e lo standard error

All'inizio abbiamo ricordato il concetto di redirezione
dell'output. Ricorderai anche che si può redirigere sia lo standard
output sia lo standard error.

Lo standard output e lo standard error non
sono altro che file aperti automaticamente all'avvio dei suoi
programmi e associati (se non rediretti altrove) al terminale.

Quindi se vuoi stampare qualcosa a video, puoi anche stampare
sullo standard output:

```c
fprintf(stdout, "Hello, World!\n");
```

E se vuoi stampare sullo standard error:

```c
fprintf(stderr, "Errore: ...\n");
```

<a href="/activities/2">Torna alla Parte II</a>
