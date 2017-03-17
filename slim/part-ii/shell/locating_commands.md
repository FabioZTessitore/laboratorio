Dove sono i comandi?



#### Dove sono i comandi?

Forse avrai notato che quando con il C crei dei programmi li mandi in esecuzione
scrivendo:

```
$ ./nomefile
```

Per i comandi, invece, scrivi semplicemente il nome:

```
$ date
```

Per mandare in esecuzione un qualunque programma, che sia fatto da te
o che sia un comando di sistema,
bisogna conoscerne il percorso (path) completo.
Il comando `date` si trova in `/bin` quindi dovresti scrivere:

```
$ /bin/date
```

ma la cosa non e' conveniente!

Nota che quando scrivi `./nomefile` stai utilizzando un percorso
relativo perché ti trova già nella directory contenente il programma.

Affinché la shell possa capire che scrivendo `date` intendi `/bin/date`
i comandi vengono memorizzati in particolari directory
e i nomi di queste directory vengono aggiunti alla variabile `PATH`.

Il contenuto di `PATH`:

```
$ echo $PATH
/usr/local/bin:/usr/bin:/bin
```

In `PATH` è memorizzata una lista di directory, intervallate
dal simbolo `:`. Tali directory verranno
controllate sequenzialmente alla ricerca del comando invocato.

&Egrave; importante notare come nel `PATH` non sia presente
la directory corrente (`.`) per cui è necessario usare la sintassi `./nomefile`.

Un'altra cosa. Non tutto ciò che viene invocato
dalla shell ha un file corrispondente nel filesystem.
Finora abbiamo parlato di comandi e abbiamo
detto che ogni comando è un file eseguibile presente in una particolare directory,
ma questa cosa non è sempre vera.

Ad esempio gli alias. Quando crei un alias non stai creando un file!

Allora ricorda bene, la shell cerca i comandi in un ordine ben preciso:

1. alias
2. parole riservare della shell
3. funzioni definite nella shell
4. comandi interni (built-in)
5. comandi nel filesystem (PATH)

Dato un comando, per capire di che si tratta si usa `type`:

```
$ type bash
bash è /bin/bash

$ type date
date è /bin/date

$ type ll
ll ha "ls -l" come alias

$ type ls
ls ha "ls --color=auto" come alias
```

Nell'ultimo caso `ls` è un alias per `ls --color=auto`, ma sai che esiste
un comando `ls` nel filesystem. Allora puoi usare l'attributo `-a` di `type`
per mostrare tutte le occorrenze di un comando:

```
$ type -a ls
ls ha "ls --color=auto" come alias
ls è /bin/ls
```

<a href="/activities/2">Torna alla Parte II</a>
