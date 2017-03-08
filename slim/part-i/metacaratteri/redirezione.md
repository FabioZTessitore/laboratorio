Redirezione dei file



#### Redirezione dei file

Alcuni metacaratteri **redirigono** (dirigono altrove)
l'input e l'output da e verso i file.

##### Redirezione dello standard input

Ricordi che alcuni comandi accettano un file come argomento per poter lavorare?

> Mostra il contenuto del file /etc/passwd

```
$ cat /etc/passwd
...
```

In effetti quello che stai facendo è chiedere che il contenuto del file `/etc/passwd`
sia rediretto al comando `cat`. Questa cosa si può esplicitare con il carattere `<`
(puoi immaginarlo come una freccia):

> Come prima, ma esplicita la redirezione

```
$ cat < /etc/passwd
```

Siccome redirigere il contenuto di un file verso un comando è un'operazione
molto comune, il simbolo `<` è spesso opzionale e quindi omesso.

##### Redirezione dello standard output

Al contrario, il simbolo `>` (anche questo puoi immaginarlo come una freccia),
redirige l'output di un comando verso un file (normalmente l'output dei comandi
finisce sullo schermo).

Attenzione, perché se il file indicato esiste già verrà sovrascritto senza avviso.

```
$ cd      # assicurati di essere nella tua home
$ cat /etc/passwd > copia_password
$ ls
... copia_password ...
```

`cat /etc/passwd` mostrerebbe sullo schermo il contenuto del file `/etc/passwd`,
ma grazie alla redirezione il tutto finisce nel file `copia_password`.
In altre parole hai fatto una copia del file.

Con la redirezione dell'output qualunque cosa possa essere stampata a video può
essere copiata in un file.

Immagina di voler mandare l'elenco dei brani musicali che possiedi
(contenuti nella directory Musica) ad un amico:

```
$ ls Musica > lista_brani
```

##### Redirezione dello standard error

A volte quando si esegue un comando possono comparire degli errori.
Tali errori vengono stampati sullo *standard error* (generalmente lo schermo,
come per l'output).

Immagina di dover raccogliere tali errori per mostrarli a qualcuno.
Puoi farlo molto semplicemente con la redirezione dello standard error:

> Prova a creare un file in /, accesso negato!

```
$ touch /prova 2> errore_salvato
```

Se vuoi salvare sia l'output normale che gli errori c'è `&>`.

##### Aggiungere testo in coda (`append`)

Prima ti ho detto di fare attenzione perché se esiste già un file con lo stesso
nome esso verrà sovrascritto dalla redirezione dell'output.

A volte, però, avrai necessità di *aggiugere* del testo ad un vecchio file.
In questi casi puoi usare `>>`:

> Aggiunge il contenuto di /etc/group al file copia_password

```
$ cat /etc/group >> copia_password
```

<a href="/activities/1">Torna alla Parte I</a>
