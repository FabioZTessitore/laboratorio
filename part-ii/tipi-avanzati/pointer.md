# I puntatori

![](../../images/people/tess.png): Bentornato Sig. Tazza, oggi le parlerò
di alcuni tipi avanzati gestiti da vari linguaggi di programmazione.

![](../../images/people/tazza.png): Già argomenti avanzati?

![](../../images/people/tess.png): Non abbia paura, cercheremo solo di capire
di che si tratta. In questo modo avremo a disposizione più strumenti per
fare esercitazioni ed esperimenti.

In particolare inizierò dal linguaggio C e dai *puntatori*.

Ricorda quando abbiamo utilizzato l'operatore `&` per ottenere l'indirizzo
di una variabile?

![](../../images/people/tazza.png): Certo. &Egrave; stato uno degli argomenti
più interessanti visti finora. Ho imparato a scrivere codice tipo questo:

```c
int num = 42;

printf("La variabile num e' memorizzata all'indirizzo %p\n", &num);
```

![](../../images/people/tess.png): Molto bene, Sig. Tazza. Ora le pare possibile
che si possa ottenere l'indirizzo di una variabile solo per stamparlo?
Secondo lei non c'è un modo per memorizzarlo?

![](../../images/people/tazza.png): Se me lo chiede immagino che ci sia. D'altra
parte la cosa sembra abbastanza logica.

![](../../images/people/tess.png): Bene. Ciò che deve sapere è che per memorizzare
un indirizzo ha bisogno di un tipo particolare di variabile chiamata *puntatore*.

Niente di cui spaventarsi. I numeri interi vengono memorizzati in variabili di
tipo `int`, i numeri in virgola mobile in variabili di tipo `float` o `double`,
gli indirizzi in variabili di tipo puntatore.

![](../../images/people/tazza.png): Ok, chiaro.

![](../../images/people/tess.png): Non mi resta che dirle come si crea una variabile
tipo puntatore: deve aggiungere un `*` al tipo della variabile puntata!

![](../../images/people/tazza.png): Lo sapevo che finiva in qualcosa di incomprensibile.

![](../../images/people/tess.png): Non si lasci confondere. Se vuole memorizzare
l'indirizzo di una variabile `int` avrà bisogno di un puntatore a intero che
si scrive `int *`. Nel caso delle variabili `float` e `double` avrà, invece,
`float *` e `double *`.

![](../../images/people/tazza.png): Ora va meglio. Voglio provare.

![](../../images/people/tess.png): Le riscrivo l'esempio di prima, solo che stavolta
memorizzo l'indirizzo di `num` prima di stamparlo.

```c
int num = 42;
int *p_num = &num;  /* p_num e' un puntatore a intero (int *),
                      quindi a destra c'e' l'indirizzo di una variabile intera */

/* stampa p_num (un indirizzo), non c'e' l'operatore & */
printf("La variabile num e' memorizzata all'indirizzo %p\n", p_num);
```

Se ha difficoltà può vedere <a href="https://github.com/FabioZTessitore/laboratorio/blob/master/esempi/part-ii/tipi-avanzati/puntatori.c">il codice completo</a>

Torna a [I tipi avanzati](../summary.md)
