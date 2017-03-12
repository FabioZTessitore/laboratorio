Introduzione al linguaggio C


#### Introduzione al linguaggio C

##### I commenti

Per inserire dei commenti in un file C
devi racchiuderli tra la sequenza di apertura `/*` e la sequenza di chiusura `*/`.

```c
/* Un bel commento */
```

Siccome c'è la sequenza di chiusura che determina la fine
di un commento puoi scrivere commenti che si estendono anche
su più linee:

```c
/* Un commento
   che si estende
   su piu' linee
*/
```

##### Il programma minimo

Scrivere programmi in C richiede
qualche attenzione in più rispetto al Python. Per cominciare
non puoi semplicemente digitare una sequenza di istruzioni,
ma è necessario fare come segue:

```c
int main()
{
  /* inserire qui le istruzioni */

  return 0;
}
```

Al momento devi sapere solo un paio di cose:

1. Le istruzioni vanno inserite dopo la partentesi graffa aperta che segue `main()`
2. Le istruzioni C terminano con il carattere `;`

Nel codice precedente c'è una sola istruzione (`return 0;`).

`return 0` *restituisce* il valore `0` al sistema operativo quando
termina il programma informandolo che l'esecuzione è andata a buon fine.

##### Stampare una stringa

Ricorda che le stringhe in C sono delimitate da virgolette doppie `"` e che
per stampare a video puoi usare la funzione `printf()` (attenzione alla f finale).

Quando utilizzi una funzione in C devi sempre accertarti
di aver incluso il corrispondente *file di intestazione*.
Nel caso della funzione `printf()` tale file si chiama `stdio.h`.

Per farla breve, se fai uso della funzione `printf()` devi inserire la riga:

```c
#include <stdio.h>
```

##### Hello, World!

```c
/* hello.c */

/* Stampa un saluto */

/* stdio.h, richiesto da printf() */
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

Il simbolo `\n` si legge `newline` e ordina a `printf()` di andare
a capo dopo aver stampato il messaggio `Hello, World!`.

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

A questo punto, se non ci sono errori, hai
ottenuto il file eseguibile `hello` e puoi mandarlo in esecuzione.

```
$ ./hello
Hello, World!
$
```

Nota quali permessi ha il file eseguibile:

```
$ ls -l
...
-rwxr-xr-x 1 fabio fabio 8400 dic 20 18:10 hello
...
```

Non ti stupirà vedere il permesso di esecuzione attivo, vero?

<a href="/activities/1">Torna alla Parte I</a>
