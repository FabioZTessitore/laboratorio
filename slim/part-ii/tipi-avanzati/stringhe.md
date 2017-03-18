Le stringhe



#### Le stringhe

Quanto tempo è passato da quando hai scritto ed eseguito:

```c
printf("Hello, World!\n");
```

Ricordi che `"Hello, World"` è una stringa?

Sicuramente si, ma ti sei mai chiesto cos'è una stringa?

In C esiste il tipo elementare `char` che può essere usato per
memorizzare un carattere. Si usa così:

```c
char c = 'A'; /* singoli apici */

printf("Codice del carattere A: %d\n", c);
printf("Carattere A: %c\n", c);
```

Il tipo `char` è un intero, generalmente di dimensione
pari ad un byte. Quando scrivi `char c = 'A';` stai memorizzando il *codice*
corrispondente al carattere `A`.

Nelle stampe successive nota che cambia la specifica di stampa. Usando `%d`
si ottiene il codice del carattere `A`. Usando `%c`, invece, si stampa proprio
il carattere `A` stesso.

Mettendo insieme più caratteri si ottiene una stringa, ma andiamo per gradi.
Dovendo memorizzare tanti caratteri insieme possiamo usare un vettore.

##### Vettori di caratteri

Prima di tutto il vettore:

```c
char caratteri[5];
```

Poi si memorizza un carattere in ogni cella del vettore:

```c
caratteri[0] = 'C';
caratteri[1] = 'i';
caratteri[2] = 'a';
caratteri[3] = 'o';
```

Questa non è ancora una stringa, è solo un vettore di caratteri.

##### Stringhe

Affinché un vettore di caratteri diventi
una stringa bisogna aggiungere il *terminatore*, un carattere speciale
che indica il termine della stringa stessa.

```c
caratteri[4] = '\0';
```

Esiste una scorciatoia per inserire elementi in un vettore e
quindi può essere utilizzata per creare stringhe:

```c
char str[5] = { 'C', 'i', 'a', 'o', '\0' };  /* non dimenticare il terminatore */
```

Facendo così si rischia di commettere
errori nel conteggio dei caratteri (soprattutto in
caso di modifiche successive al programma).
Sarebbe meglio se fosse il compilatore a contare per noi:

```c
/* ometto il 5 tra le parentesi [] */
char str[] = { 'C', 'i', 'a', 'o', '\0' };
```

La situazione è migliorata ma risulta ancora scomodo memorizzare una stringa.

Il linguaggio C ci viene in aiuto mediante un'altra notazione,
che già conosci, ma di cui ora puoi apprezzare la potenza e l'utilità
(però tieni presente che quello che abbiamo visto è ciò che accade dietro le quinte).

```c
char str[] = "Ciao";  /* aggiunge automaticamente il terminatore */
```

##### Esempio completo

```c
/* crea e stampa una stringa */

#include <stdio.h>

int main()
{
  char saluto[] = "Salve a tutti!";

  puts(saluto);  /* puts() stampa una stringa */

  return 0;
}
```

<a href="/activities/2">Torna alla Parte II</a>
