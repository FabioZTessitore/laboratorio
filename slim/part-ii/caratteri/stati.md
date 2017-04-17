Gestione degli stati

#### Gestione degli stati

Finora abbiamo passato all'output i caratteri letti in input oppure
ci siamo limitati ad effettuare qualche genere di conteggio (spazi, vocali, ecc.).

Che succede se invece vogliamo riconoscere una sequenza di caratteri?
Immaginiamo ad esempio un programma che quando trova la sequenza 'abc'
la sostituisce con 'XY' lasciando invariati gli altri caratteri.
Ovviamente quando incontriamo una 'a' non possiamo sapere se seguiranno la 'b'
e la 'c'.

In questi casi il problema si semplifica moltissimo se immaginiamo il programma
come una sequenza di stati. Quando il programma si trova in un certo stato
si comporta in un modo, quando cambia lo stato cambia il comportamento.

Nel caso dell'esempio, fin quando non si incontra una 'a' il programma deve
solo stampare i caratteri e niente altro. Chiamiamo questo stato 'NORM' per
indicare che è il comportamento di default. Possiamo schematizzarlo in questo
modo:

<table>
<tr>
  <th>Stato</th><th>Input</th><th>Output</th><th>Nuovo Stato</th>
</tr>
<tr>
  <td>NORM</td><td>c != 'a'</td><td>c</td><td>-</td>
</tr>
</table>

In altre parole stiamo dicendo che se siamo nello stato 'NORM' e arriva un
carattere diverso da 'a' lo dobbiamo solo stampare e non bisogna cambiare stato.

A questo punto dobbiamo tener conto dell'altro caso. Che succede se arriva una 'a'?

<table>
<tr>
  <th>Stato</th><th>Input</th><th>Output</th><th>Nuovo Stato</th>
</tr>
<tr>
  <td>NORM</td><td>c == 'a'</td><td>-</td><td>A</td>
</tr>
</table>

In questo caso non mandiamo nulla in output perché non sappiamo cosa arriverà
dopo, però modifichiamo lo stato del programma (diventa 'A').

Riepilogando, la gestione dello stato 'NORM' è:

<table>
<tr>
  <th>Stato</th><th>Input</th><th>Output</th><th>Nuovo Stato</th>
</tr>
<tr>
  <td>NORM</td><td>c != 'a'</td><td>c</td><td>-</td>
</tr>
<tr>
  <td>NORM</td><td>c == 'a'</td><td>-</td><td>A</td>
</tr>
</table>

Proviamo ora a gestire lo stato 'A'. Se arriva il carattere 'b' non siamo ancora
sicuri che non arrivi anche la 'c'. Allora non stampiamo nulla e passiamo allo stato
'B'.

<table>
<tr>
  <th>Stato</th><th>Input</th><th>Output</th><th>Nuovo Stato</th>
</tr>
<tr>
  <td>A</td><td>c == 'b'</td><td>-</td><td>B</td>
</tr>
</table>

Se invece non arriva la 'b' che si fa? Chiaramente il carattere corrente
va stampato, ma non bisogna dimenticarsi della 'a' che non avevamo stampato
precedentemente. Attenzione alla variazione di stato: si ritorna a 'NORM'.

<table>
<tr>
  <th>Stato</th><th>Input</th><th>Output</th><th>Nuovo Stato</th>
</tr>
<tr>
  <td>A</td><td>c != 'b'</td><td>'a' + c</td><td>NORM</td>
</tr>
</table>

Ricapitolando lo stato 'A':

<table>
<tr>
  <th>Stato</th><th>Input</th><th>Output</th><th>Nuovo Stato</th>
</tr>
<tr>
  <td>A</td><td>c == 'b'</td><td>-</td><td>B</td>
</tr>
<tr>
  <td>A</td><td>c != 'b'</td><td>'a' + c</td><td>NORM</td>
</tr>
</table>

A questo punto il procedimento dovrebbe essere chiaro. Ci basterà definire
anche lo stato B e considerare i vari casi in input.

<table>
<tr>
  <th>Stato</th><th>Input</th><th>Output</th><th>Nuovo Stato</th>
</tr>
<tr>
  <td>NORM</td><td>c != 'a'</td><td>c</td><td>-</td>
</tr>
<tr>
  <td>NORM</td><td>c == 'a'</td><td>-</td><td>A</td>
</tr>
<tr>
  <td>A</td><td>c == 'b'</td><td>-</td><td>B</td>
</tr>
<tr>
  <td>A</td><td>c != 'b'</td><td>'a' + c</td><td>NORM</td>
</tr>
<tr>
  <td>B</td><td>c == 'c'</td><td>'XY'</td><td>NORM</td>
</tr>
<tr>
  <td>B</td><td>c != 'c'</td><td>'ab' + c</td><td>NORM</td>
</tr>
</table>

##### Codifica

Una volta definiti gli stati e i vari passaggi, per effettuare la codifica
partiamo dal codice di base che legge i caratteri dallo standard input
e li ricopia sullo standard output:

```c
int c;

while ( (c = getchar()) != EOF ) {
  putchar(c);
}
```

Definiamo gli stati e scriviamo il codice in base allo stato:

```c
int NORM = 0; /* i valori non sono importanti */
int A = 1;
int B = 2;

int stato = NORM;

int c;  /* carattere corrente */

while ( (c = getchar()) != EOF ) {
  if (stato == NORM) {
    ...
  } else if (stato == A) {
    ...
  } else if (stato == B) {
    ...
  }
}
```

La versione definitiva:

```c
int NORM = 0; /* i valori non sono importanti */
int A = 1;
int B = 2;

int stato = NORM;

int c;  /* carattere corrente */

while ( (c = getchar()) != EOF ) {
  if (stato == NORM) {
    if (c != 'a') {
      putchar(c);
    } else {
      stato = A;
    }
  } else if (stato == A) {
    if (c != 'b') {
      putchar('a');
      putchar(c);
      stato = NORM;
    } else {
      stato = B;
    }
  } else if (stato == B) {
    if (c == 'c') {
      putchar('X');
      putchar('Y');
    } else {
      putchar('a');
      putchar('b');
      putchar(c);
    }
    stato = NORM;
  }
}
```

<a href="/activities/2">Torna alla Parte II</a>
