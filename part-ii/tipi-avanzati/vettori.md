# I vettori

![](../../images/people/tess.png): Caro Sig. Tazza, oggi le parlerò dei *vettori*.
Voglio subito chiarire che i vantaggi derivanti dall'uso di questo tipo
avanzato le saranno chiari in seguito. Per il momento si concentri su cosa
sono e come si dichiarano e usano.

![](../../images/people/tazza.png): Sono costretto a fidarmi.

![](../../images/people/tess.png): Eh già.

Può immaginare un vettore come un treno in cui le singole carrozze sono
delle semplici variabili. Le carrozze sono tutte uguali (le variabili sono
tutte dello stesso tipo); una volta assemblato il treno non può aggiungere
o togliere carrozze (il numero di variabili è fisso); ogni carrozza
può essere identificata dalla posizione che occupa nel treno (la prima,
la seconda, ecc).

Torniamo al C, ecco come dichiarare un vettore di 10 interi:

```c
int numeri[10];
```

Il vettore si chiama `numeri` (il treno dell'analogia). Le variabili di cui è
composto sono `numeri[0] numeri[1] ... numeri[9]` (10 in tutto).
Ognuna delle variabili è una semplice variabile intera che può usare come ha sempre fatto.

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

![](../../images/people/tazza.png): A parte il fatto che non ne vedo l'utilità
è tutto chiaro.

![](../../images/people/tess.png): Come le dicevo i vantaggi li vedrà in seguito.
Per il momento può solo immaginare cosa potrà fare potendo immagazzinare grandi
quantità di dati.

## Un esperimento

![](../../images/people/tess.png): Le voglio proporre un esperimento.

Provi a
stampare gli indirizzi di alcuni elementi consecutivi del vettore. Provi
anche a calcolare la differenza tra indirizzi e la confronti con la dimensione
degli interi.

![](../../images/people/tazza.png): Ci sono un sacco di cose. Vediamo, da dove
comincio ... creo un vettore di interi:

```c
int vett[5];
```

Adesso mi chiede di stampare gli indirizzi di alcuni elemeni. Se ho capito bene
ogni elemento del vettore è una semplice variabile intera, quindi se voglio
stampare l'indirizzo di `vett[2]`, ad esempio, mi basterà fare:

```c
printf("indirizzo di vett[2]: %p\n", &vett[2]);
```

![](../../images/people/tess.png): Sta andando benissimo.

![](../../images/people/tazza.png): OK, adesso mi chiede di calcolare una differenza
tra indirizzi. Il risultato di che tipo sarà?

![](../../images/people/tess.png): La differenza tra due indirizzi è un valore intero
e rappresenta il numero di celle tra il primo e il secondo elemento.

![](../../images/people/tazza.png): Va bene, allora faccio:

```c
int distanza = &vett[2] - &vett[1];
printf("vett[1] e vett[2] distano %d celle\n", distanza);
```

![](../../images/people/tess.png): Non le resta altro da fare che confrontare
questa distanza con la dimensione di un intero.

![](../../images/people/tazza.png): La dimensione di una variabile o tipo
si ottiene con l'operatore `sizeof`:

```c
printf("Dimensione di un intero: %d byte\n", sizeof(int));
```

![](../../images/people/tess.png): Molto bene. Proviamo a mandare in esecuzione
il suo esperimento e vediamo che succede:

![](../../images/people/tazza.png): Eseguo:

```
indirizzo di vett[1]: 0x7fff8f02f924
indirizzo di vett[2]: 0x7fff8f02f928
vett[1] e vett[2] distano 1 celle
Dimensione di un intero: 4 byte
```

![](../../images/people/tess.png): L'esperimento è stato un successo. Noti
che tra l'indirizzo della cella `vett[1]` e quello della cella `vett[2]`
ci sono 4 byte (proprio la dimensione di un intero sulla sua macchina).

Il risultato fornito dall'operazione `&vett[2] - &vett[1]` è, invece, `1`,
cioè la differenza tra gli indici.

![](../../images/people/tazza.png): Sono stupito, la differenza `&vett[2] - &vett[1]` pensavo
venisse 4, sarebbe stato più logico.

![](../../images/people/tess.png): Ne è davvero convinto?

Se in un puntatore è memorizzato l'indirizzo di un elemento di un vettore,
di qualunque tipo esso sia, le basterà aggingere `1` per arrivare all'indirizzo
della cella successiva. In altre parole, lavorando con i puntatori non deve
preoccuparsi della dimensione dei vari tipi.

Se ha difficoltà può vedere <a href="https://github.com/FabioZTessitore/laboratorio/blob/master/esempi/part-ii/tipi-avanzati/vettori.c">il codice completo</a>

Torna a [I tipi avanzati](../summary.md)
