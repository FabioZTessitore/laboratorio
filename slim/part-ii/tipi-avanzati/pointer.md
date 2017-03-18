I puntatori


#### I puntatori

Parliamo di alcuni tipi avanzati gestiti dal linguaggio C.
In particolare iniziamo dai *puntatori*.

Ricordi quando abbiamo utilizzato l'operatore `&` per ottenere l'indirizzo
di una variabile?

```c
int num = 42;

printf("Indirizzo di num: %p\n", &num);
```

Per memorizzare un indirizzo hai bisogno di un tipo particolare di variabile chiamata *puntatore*.

Niente di cui spaventarsi. I numeri interi vengono memorizzati in variabili di
tipo `int`, i numeri in virgola mobile in variabili di tipo `float` o `double`,
gli *indirizzi* in variabili di tipo *puntatore*.

Se vuoi memorizzare l'indirizzo di una variabile `int` avrai
bisogno di un *puntatore a intero* che si scrive `int *`.
Nel caso delle variabili `float` e `double` avrai, invece,
`float *` e `double *`.

L'esempio di prima, solo che stavolta memorizziamo l'indirizzo di `num`
in un puntatore ad intero prima di stamparlo.

```c
int num = 42;
int *p_num = &num;  /* p_num e' un puntatore a intero (int *),
                      quindi a destra c'e' l'indirizzo di una variabile intera */

/* stampa p_num (un indirizzo), non c'e' l'operatore & */
printf("Indirizzo di num: %p\n", p_num);
```

Se hai difficoltà puoi vedere <a href="https://github.com/FabioZTessitore/laboratorio/blob/master/esempi/part-ii/tipi-avanzati/puntatori.c">il codice completo</a>

<a href="/activities/2">Torna alla Parte II</a>
