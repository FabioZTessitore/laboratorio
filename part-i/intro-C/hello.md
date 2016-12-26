# Introduzione al linguaggio C

![](../../images/people/tess.png): Salve Sig. Tazza, visto che è diventato così
bravo a scrivere semplici programmi in Python, le mostro come fare le stesse
cose con il linguaggio C.

## I commenti

![](../../images/people/tess.png): Se vuole inserire dei commenti in un file C
deve racchiuderli tra la sequenza di apertura `/*` e la sequenza di chiusura `*/`.

```c
/* Un bel commento */
```

Siccome c'è la sequenza di chiusura che determina la fine
di un commento può scrivere commenti che si estendono anche
su più linee:

```c
/* Un commento
   che si estende
   su piu' linee
*/
```

## Il programma minimo

![](../../images/people/tess.png): Scrivere programmi in C richiede
qualche attenzione in più rispetto al Python. Per cominciare
non può semplicemente scrivere la sua sequenza di istruzioni,
ma è necessario fare come segue:

```c
int main()
{
  /* inserire qui le istruzioni */

  return 0;
}
```

![](../../images/people/tazza.png): Come può ben immaginare la cosa
non è molto chiara.

![](../../images/people/tess.png): Si, ha ragione. Purtroppo per il
momento non posso darle troppe spiegazioni.

Un paio di cose, però, deve saperle:
1. Le istruzioni vanno inserite dopo la partentesi graffa aperta che segue `main()`
2. Le istruzioni C terminano con il carattere `;`

Nel codice precedente c'è una sola istruzione (`return 0;`).

![](../../images/people/tazza.png): Almeno quella può dirmi a cosa serve?

![](../../images/people/tess.png): `return 0` restituisce il valore `0` al sistema operativo quando termina il suo programma informandolo che l'esecuzione è andata a buon fine.

## Stampare una stringa

![](../../images/people/tess.png): Il nostro primo programma
stamperà il classico saluto sul terminale.

Ricordi che le stringhe in C sono delimitate da virgolette doppie `"` e che
per stampare a video può usare la funzione `printf()` (attenzione alla f finale).

![](../../images/people/tazza.png): Va bene, penso di potercela fare.

![](../../images/people/tess.png): Aspetti, non le ho detto tutto.

Quando utilizza una funzione in C deve sempre accertarsi
che sia stato incluso il corrispondente *file di intestazione*.
Nel caso della funzione `printf()` tale file si chiama `stdio.h`.

Per farla breve, se nei suoi programmi fa uso della funzione `printf()` deve inserire la riga:

```c
#include <stdio.h>
```

## Hello, World!

```c
/* hello.c */

/* Stampa un saluto */

#include <stdio.h>

/* tutti i programmi C iniziano da main() */
int main()
{
  printf("Hello, World!\n");

  /* restituisce 0 al sistema operativo e termina.
   * 0 significa tutto OK */
  return 0;
}
```

![](../../images/people/tazza.png): Lei continua a non dirmi tutto.
1. Perché c'è un `*` all'interno dell'ultimo commento?
2. Cosa significa `\n` all'interno della stringa?

![](../../images/people/tess.png): Non le sfugge nulla ...

L'asterisco non serve a niente. Come le ho già detto i commenti
sono delimitati da `/*` e `*/`. Eventuali altri asterischi
sono presenti solo per ragioni estetiche.

Molto più importante, invece, il simbolo `\n`.
Si legge `newline` e ordina a `printf()` di andare a capo dopo aver
stampato il messaggio `Hello, World!`.

![](../../images/people/tazza.png): Possiamo eseguire il programma ora?

![](../../images/people/tess.png): Non so come dirglielo ... No.

Il linguaggio C non è interpretato come il Python, ma è compilato.
Questo significa che il codice sorgente deve subire
delle trasformazioni prima di diventare *eseguibile* dalla macchina.

Il compilatore (gcc) esegue tutta una serie di passaggi,
ma per i nostri scopi ci basta lanciare due comandi:

> Compilazione (opzione -c) del file hello.c in codice oggetto;
<br>ottiene come output (opzione -o) il file hello.o

```
$ gcc -c hello.c -o hello.o
```

> Link (collegamento) della libreria standard C (quella che contiene il codice della funzione printf);<br>
ottiene come output l'eseguibile hello

```
$ gcc hello.o -o hello
```

A questo punto, se non ci sono stati errori, abbiamo
ottenuto il file eseguibile `hello` e possiamo mandarlo in esecuzione.

```
$ ./hello
Hello, World!
$
```

![](../../images/people/tess.png): Sig. Tazza, ha notato i permessi dei file eseguibili?

```
$ ls -l
...
-rwxr-xr-x 1 fabio fabio 8400 dic 20 18:10 hello
...
```

Non si stupirà nel vedere il permesso di esecuzione attivo, vero?

Torna a [Introduzione al C](../summary.md)
