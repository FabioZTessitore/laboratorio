# Redirezione dei file

![](../../images/people/tess.png): Alcuni metacaratteri redirigono (dirigono altrove)
l'input e l'output da e verso i file. Sono comodissimi.

![](../../images/people/tazza.png): Sig. Tessitore, non capisco di cosa parla.

## Redirezione dello standard input

![](../../images/people/tess.png): Ma si che lo sa. In parte ne ha già fatto uso senza saperlo.
Ricorda che alcuni comandi accettano un file come argomento per poter lavorare?

```
$ cat /etc/passwd
```

In effetti quello che sta facendo è chiedere che il contenuto del file `/etc/passwd`
sia rediretto al comando `cat`. Questa cosa si può esplicitare con il carattere `<`
(può immaginarlo come una freccia):

```
$ cat < /etc/passwd
```

Siccome redirigere il contenuto di un file verso un comando è un'operazione
molto comune, il simbolo `<` è spesso opzionale e quindi omesso.

## Redirezione dello standard output

Al contrario, il simbolo `>` (anche questo può immaginarlo come una freccia),
redirige l'output di un comando verso un file (normalmente l'output dei comandi
finisce sullo schermo).

Attenzione, perché se il file indicato esiste già
verrà sovrascritto senza avviso.

```
$ cd      # si assicuri di essere nella sua home
$ cat /etc/passwd > copia_password
$ ls
... copia_password ...
```

![](../../images/people/tazza.png): Non sono sicuro di aver capito bene cosa succede.

![](../../images/people/tess.png): `cat /etc/passwd` mostrerebbe sullo schermo il
contenuto del file `/etc/passwd`, ma grazie alla redirezione il tutto finisce
nel file `copia_password`. In altre parole ha fatto una copia del file.

![](../../images/people/tazza.png): Non sembra molto utile. Non esiste già `cp` per
fare copie di file?

![](../../images/people/tess.png): Sig. Tazza, un po' di immaginazione. Con la
redirezione dell'output qualunque cosa possa essere stampata a video può
essere copiata in un file.

![](../../images/people/tazza.png): Può farmi un esempio?

![](../../images/people/tess.png): Una cosa semplice. Immagini di voler mandare
l'elenco dei brani musicali che possiede (contenuti nella directory Musica)
ad un amico:

```
$ ls Musica > lista_brani
```

## Redirezione dello standard error

![](../../images/people/tess.png): E non è finita. A volte quando si esegue un comando
possono comparire degli errori. Tali errori vengono stampati sullo
*standard error* (generalmente lo schermo, come per l'output).

Immagini di dover raccogliere tali errori per mostrarli a qualcuno. Può farlo
molto semplicemente con la redirezione dello standard error:

```
$ touch /prova 2> errore_salvato    # prova a scrivere in /, accesso negato
```

![](../../images/people/tazza.png): E se voglio salvare sia l'output normale che
gli errori?

![](../../images/people/tess.png): In quel caso userà `&>`

## Aggiungere testo in coda (`append`)

![](../../images/people/tess.png): Sig. Tazza, un'ultima cosa. Prima le ho detto
di fare attenzione perché se esiste già un file con lo stesso nome esso verrà
sovrascritto.

A volte, però, avrà necessità di *aggiugere* del testo ad un vecchio file. In
questi casi può usare `>>`

```
$ cat /etc/group >> copia_password
```

Torna a [I metacaratteri](../summary.md)

Oppure [continua a leggere](graffe.md)
