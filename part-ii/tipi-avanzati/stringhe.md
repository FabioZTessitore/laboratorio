# Le stringhe

![](../../images/people/tess.png): Sig. Tazza, quanto tempo è passato da quando
ha scritto ed eseguito:

```c
printf("Hello, World!");
```

Ricorda che `"Hello, World"` è una stringa?

![](../../images/people/tazza.png): Sig. Tessitore, che domande? Certo
che lo so. Ne ho stampate tantissime finora.

![](../../images/people/tess.png): Non avevo dubbi. Si è mai chiesto cos'è
una stringa?

![](../../images/people/tazza.png): Credevo fosse uno dei tipi elementari.

![](../../images/people/tess.png): Non proprio. Almeno non in C. Ma facciamo
un passo indietro.

In C esiste il tipo elementare `char` che può essere usato per memorizzare un carattere.
Si usa così:

```c
char c = 'A';

printf("Stampa il codice corrispondente al carattere A: %d\n", c);
printf("Stampa il carattere A: %c\n", c);
```

Il tipo `char` è sostanzialmente un tipo intero, generalmente di dimensione
pari ad un byte. Quando si scrive `char c = 'A';` sta memorizzando il *codice*
corrispondente al carattere `A`.

Nelle stampe successive noti che cambia la specifica di stampa. Usando `%d`
si ottiene il codice del carattere `A`. Usando `%c`, invece, si stampa proprio
il carattere `A` stesso.

![](../../images/people/tazza.png): Mettendo insieme più caratteri ottengo una stringa.

![](../../images/people/tess.png): Si, ma andiamo per gradi. Dovendo memorizzare
tanti caratteri insieme possiamo usare un vettore. Le mostro come.

## Vettori di caratteri

![](../../images/people/tess.png): Prima di tutto il vettore:

```c
char caratteri[5];
```

Poi si memorizza un carattere per ogni cella del vettore:

```c
caratteri[0] = 'C';
caratteri[1] = 'i';
caratteri[2] = 'a';
caratteri[3] = 'o';
```

![](../../images/people/tazza.png): Così facendo ho creato una stringa?

![](../../images/people/tess.png): Non ancora. Per il momento è solo
un vettore di caratteri, ma non ancora una stringa.

## Stringhe

![](../../images/people/tess.png): Affinché un vettore di caratteri diventi
una stringa bisogna aggiungere il *terminatore*, un carattere speciale
che indica il termine della stringa.

```c
caratteri[4] = '\0';
```

![](../../images/people/tazza.png): Va bene, la stringa è creata, ma non mi
dica che ogni volta devo fare tutti questi passaggi.

![](../../images/people/tess.png): Ma no. Esiste una scorciatoia per inserire
elementi in un vettore e che quindi può essere utilizzata per creare stringhe.

```c
char str[5] = { 'C', 'i', 'a', 'o', '\0' };  /* non dimentichi il terminatore */
```

![](../../images/people/tazza.png): Un po' meglio, ma è ancora scomodo.

![](../../images/people/tess.png): Ha ragione.
![](../../images/people/tess.png):




  /* Cosi' facendo pero' rischiamo di commettere
   * errori nel conteggio dei caratteri (soprattutto in
   * caso di modifiche successive al programma).
   * Allora lasciamo che sia il compilatore a contare per noi
   */
  char str3[] = { 'C', 'i', 'a', 'o', '\0' };

  /* La situazione e' migliorata ma risulta ancora
   * scomodo scrivere una stringa.
   * Il C ci viene in aiuto mediante un'altra notazione
   */
  char str4[] = "Ciao";

  printf("str1: %s\n"
      "str2: %s\n"
      "str3: %s\n"
      "str4: %s\n", str1, str2, str3, str4);

  return 0;
}

## char *


Torna a [I tipi avanzati](../summary.md)
