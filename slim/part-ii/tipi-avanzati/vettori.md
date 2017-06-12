I vettori


#### I vettori

Parliamo ora di *vettori*.

Diciamo subito che i vantaggi derivanti dall'uso di questo tipo
avanzato ti saranno chiari in seguito. Per il momento concentrati su cosa
sono e come si dichiarano e usano.

Puoi immaginare un vettore come un treno in cui le singole carrozze sono
delle semplici variabili. Le carrozze sono tutte uguali (le variabili sono
tutte dello stesso tipo); una volta assemblato il treno non puoi aggiungere
o togliere carrozze (il numero di variabili è fisso); ogni carrozza
può essere identificata dalla posizione che occupa nel treno (la prima,
la seconda, ecc).

Torniamo al C, ecco come dichiarare un vettore di 10 interi:

```c
int numeri[10];
```

Il vettore si chiama `numeri`. Le variabili di cui è
composto sono `numeri[0] numeri[1] ... numeri[9]` (10 in tutto).
Ognuna di esse è una semplice variabile intera che puoi usare come sempre.

```
numeri[0] = 3;
numeri[1] = 42;
numeri[7] = 99;
numeri[8] = 0;

printf("numeri[0]: %d\n", numeri[0]);
printf("numeri[1]: %d\n", numeri[1]);
printf("numeri[7]: %d\n", numeri[7]);
printf("numeri[8]: %d\n", numeri[8]);
```

##### Un esperimento

Prova a stampare gli indirizzi di alcuni elementi consecutivi del vettore.
Prova anche a calcolare la differenza tra indirizzi.

> Crea un vettore di interi

```c
int vett[5];
```

> Stampare gli indirizzi di alcuni elemeni

```c
printf("indirizzo di vett[2]: %p\n", &vett[2]);
```

> Calcola la differenza tra due indirizzi

```c
int distanza = &vett[2] - &vett[1];
printf("vett[1] e vett[2] distano %d unita'\n", distanza);
```

Prova ora a confrontare questa distanza con la dimensione di un intero
(la dimensione di una variabile o tipo si ottiene con l'operatore `sizeof`):

```c
printf("Dimensione di un intero: %d byte\n", sizeof(int));
```

Mandiamo in esecuzione:

```
indirizzo di vett[1]: 0x7fff8f02f924
indirizzo di vett[2]: 0x7fff8f02f928
vett[1] e vett[2] distano 1 unita'
Dimensione di un intero: 4 byte
```

L'esperimento è stato un successo. Nota che tra l'indirizzo della cella
`vett[1]` e quello della cella `vett[2]` ci sono 4 byte
(proprio la dimensione di un intero su questa macchina).

Il risultato fornito dall'operazione `&vett[2] - &vett[1]` è, invece, `1`,
cioè la differenza tra gli indici.

Se in un puntatore è memorizzato l'indirizzo di un elemento di un vettore,
di qualunque tipo esso sia, ti basterà aggingere `1` per arrivare all'indirizzo
della cella successiva. In altre parole, lavorando con i puntatori non devi
preoccuparti della dimensione dei vari tipi.

Se hai difficoltà puoi vedere <a href="https://github.com/FabioZTessitore/laboratorio/blob/master/esempi/part-ii/tipi-avanzati/vettori.c">il codice completo</a>

<a href="/activities/2">Torna alla Parte II</a>
