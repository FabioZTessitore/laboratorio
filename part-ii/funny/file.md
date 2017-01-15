# Leggere e scrivere file in C

![](../../images/people/tess.png): Sig. Tazza, oggi le mostrerò come aprire
file in modo da potervi scrivere qualcosa dentro e come effettuare input
da file.

![](../../images/people/tazza.png): Aspetti un attimo. Se creo un programma,
diciamo `hello`, che stampa il solito saluto `Hello, World!`, mi basterà
utilizzare la redirezione dell'output per stampare in un file invece che
sul terminale.

```
$ ./hello > saluti
```

![](../../images/people/tess.png): Molto bene. Lei sta sfruttando le caratteristiche
del sistema operativo per ottenere il risultato voluto e in molti casi
può essere sufficiente.

Voglio mostrarle, invece, come fare per far aprire un file dal programma stesso
in modo da poter fare letture e scritture. In questo modo, per esempio,
potrà salvare il risultato delle sue operazioni.

![](../../images/people/tazza.png): OK, capito.

## Aprire e chiudere un file

![](../../images/people/tess.png): Per cominciare apriamo un file di testo.
A tale scopo abbiamo a disposizione la funzione `fopen()`.

`fopen()` accetta come parametri il nome del file da aprire e il modo in cui deve aprirlo.

![](../../images/people/tazza.png): Che significa il modo?

![](../../images/people/tess.png): Si possono aprire file in sola lettura ad esempio.
Oppure in lettura e scrittura.

Per il momento queste due modalità saranno sufficienti:

"r", apre un file in sola lettura
"w", apre un file in scrittura  ???????? controllare r+, w+ ?????????

![](../../images/people/tazza.png): Va bene, dove si nascondono le difficoltà?

![](../../images/people/tess.png): Sig. Tazza, come è sospettoso ...

La funzione `fopen()` restituisce un puntatore a `FILE`.

![](../../images/people/tazza.png): Ecco, lo sapevo. E come si gestisce?

![](../../images/people/tess.png): Se le avessi parlato di puntatore a intero
come avrebbe reagito?

![](../../images/people/tazza.png): Avrei reagito meglio. Se con `int` creo una
variabile intera, con `int *` creo un puntatore a intero.

![](../../images/people/tess.png): Esatto. E con `FILE *` crea un puntatore a `FILE`,
niente di diverso.

```c
FILE *f = fopen("myfile.txt", "w");
```

Ricordi però che prima di chiudere il programma bisogna chiudere tutti i file
aperti:

```c
fclose(f);
```

## Scrivere in un file

![](../../images/people/tess.png): Una volta aperto il file possiamo scrivere
qualcosa al suo interno. Invece di usare `printf()` le basterà usare `fprintf()`
che accetta come primo parametro il riferimento al `FILE` che ha aperto.

```c
FILE *f = fopen("myfile.txt", "w");

fprintf(f, "Hello, World!\n");

fclose(f);
```

## Leggere da un file

![](../../images/people/tess.png): Proviamo a fare l'operazione opposta,
leggiamo da un file.

Per prima cosa crei un file con il suo editor di testi preferito
e ci scriva dentro un numero, ad esempio intero:

> myfile.txt

```
42
```

![](../../images/people/tess.png): A questo punto apriamo il file in lettura
e utilizzando `fscanf()` leggiamo quel valore e stampiamolo sul terminale.

```c
int num = 0;
FILE *f = fopen('myfile.txt', 'r');

fscanf(f, "%d", &num);
printf("Ho letto il valore %d\n", num);

fclose(f);
```

## Lo standard output e lo standard error

![](../../images/people/tess.png): Prima mi ha ricordato che conosce la redirezione
dell'output. Ricorderà anche che si può redirigere sia lo standard output sia
lo standard error.

![](../../images/people/tazza.png): Si si.

![](../../images/people/tess.png): Lo standard output e lo standard error non
sono altro che file aperti automaticamente all'avvio dei suoi programmi e associati
(se non rediretti altrove) al monitor.

Quindi se voglio stampare qualcosa a video, posso anche stampare sullo standard output:

```c
fprintf(stdout, "Hello, World!\n");
```

E se voglio stampare sullo standard error:

```c
fprintf(stderr, "Errore: ...\n");
```

![](../../images/people/tazza.png): Che meraviglia!

Torna a [Non solo terminale](part-ii/summary.md)
