Le funzioni in C


#### Le funzioni in C

Finora ci siamo concentrati sulla ricerca di algoritmi in grado di risolvere
i vari problemi proposti. Un problema, però, risulta più semplice da risolvere
se riusciamo a scomporlo in parti più piccole. Se prendiamo delle istruzioni
che svolgono un particolare compito e diamo loro un nome, abbiamo creato una
funzione.

In altre parole le funzioni servono a **suddividere** un problema in sottoproblemi
più piccoli e ad **astrarre** (nascondere i dettagli).

Facciamo un esempio. Immagina di avere necessità di stampare dieci asterischi
in varie parti del programma. Significa che qui e lì nel codice ci saranno
le righe:

```c
for (i = 0; i < 10; i++) {
  putchar('*');
}
```

Invece di scrivere sempre le stesse cose possiamo creare la funzione
`stampa_dieci_asterischi()` e richiamarla ogni volta che sarà necessario.
In questo modo, inoltre, stiamo nascondendo i dettagli di *come* si stampano
dieci asterischi rendendo il codice principale più leggibile.

##### Prototipi e definizioni

Quando si crea una funzione, oltre al nome, bisogna decidere altre due cose:
l'eventuale lista di parametri accettati dalla funzione e il tipo di ritorno.

I parametri accettati dalla funzione sono quei valori di cui la funzione ha
bisogno per svolgere il proprio lavoro. Nel caso della funzione `stampa_dieci_asterischi()`
non ci sono parametri perciò non c'è nulla tra le parentesi tonde.

Spesso le funzioni calcolano un valore che poi restituiscono. Il tipo del valore
ritornato va specificato. La funzione `stampa_dieci_asterischi()` non calcola
e non restituisce nulla (deve solo stampare) ed in questi casi si usa la parola
chiave `void`.

Queste informazioni, messe insieme, permettono di creare il prototipo della funzione.
Nel caso dell'esempio diventa:

```c
void stampa_dieci_asterischi();
```

A questo punto non resta altro da fare che scrivere il corpo della funzione:

```c
void stampa_dieci_asterischi()
{
  int i;

  for (i = 0; i < 10; i++) {
    putchar('*');
  }
}
```

Poi quando ne abbiamo bisogno la invochiamo:

```c
int main()
{
  ...

  /* invoca */
  stampa_dieci_asterischi();

  ...
}
```

**Nota:** `main()` è proprio una funzione! &Egrave; invocata automaticamente
quando il tuo programma viene lanciato.

##### Esempio completo

Il codice completo:

```c
#include <stdio.h>

/* prototipi */
void stampa_dieci_asterischi();

int main()
{
  puts("Esempio di definizione e uso di funzioni");

  stampa_dieci_asterischi();
  putchar('\n');

  puts("La funzione main() risulta piu' leggibile");

  stampa_dieci_asterischi();
  putchar('\n');

  puts("E a chi importa come si stampano dieci asterischi?");

  stampa_dieci_asterischi();
  putchar('\n');
}

/* definizione */
void stampa_dieci_asterischi()
{
  int i;

  for (i = 0; i < 10; i++) {
    putchar('*');
  }
}
```

<a href="/activities/3">Torna alla Parte III</a>
