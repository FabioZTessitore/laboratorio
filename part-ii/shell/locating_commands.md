# Dove sono i comandi?

![](../../images/people/tazza.png): Sig. Tessitore, devo farle una domanda.

Con il C ho creato tanti piccoli programmi e per mandarli in esecuzione
scrivo:

```
$ ./nomefile
```

Per i comandi, invece, scrivo semplicemente il nome per lanciarli:

```
$ date
```

Perche' questa differenza?

![](../../images/people/tess.png): Le rispondo subito. Per mandare in esecuzione
un qualunque programma, fatto da lei o un comando di sistema, bisogna conoscerne
il percorso (path) completo. Il comando `date` si trova in `/bin` quindi
dovrebbe scrivere:

```
$ /bin/date
```

ma la cosa non e' conveniente!

Le faccio notare che quando scrive `./nomefile` sta utilizzando un percorso
relativo perché si trova già nella directory contenente il programma.

![](../../images/people/tazza.png): Però scrivo solo `date` e non `/bin/date`.
Come fa la shell a capire cosa voglio fare?

![](../../images/people/tess.png): I comandi vengono memorizzati in directory
note e i nomi di queste directory vengono aggiunti alla variabile `PATH`

Le mostro il contenuto di `PATH` sulla mia macchina:

```
$ echo $PATH
/usr/local/bin:/usr/bin:/bin
```

Come le dicevo, in `PATH` è memorizzata una lista di directory. Come può
vedere sono intervallate dal simbolo `:`. Tali directory verranno
controllate sequenzialmente alla ricerca del comando invocato.

&Egrave; importante notare come nel `PATH` non sia presente
la directory corrente (`.`) per cui è necessario usare la sintassi `$ ./nomefile`.

![](../../images/people/tess.png): Un'altra cosa. Non tutto ciò che viene invocato
dalla shell ha un file corrispondente nel filesystem.

![](../../images/people/tazza.png): Adesso mi sono perso.

![](../../images/people/tess.png): Finora abbiamo parlato di comandi e abbiamo
detto che ogni comando è un file eseguibile presente in una particolare directory.

Questa cosa non è sempre vera.

![](../../images/people/tazza.png): Ah no?

![](../../images/people/tess.png): Non ricorda gli alias? Ne abbiamo parlato
pochi giorni fa. Quando crea un alias non sta creando un file!

Allora ricordi bene, la shell cerca i comandi in un ordine ben preciso:

1. alias
2. parole riservare della shell
3. funzioni definite nella shell
4. comandi interni (built-in)
5. comandi nel filesystem (PATH)

![](../../images/people/tazza.png): Dato un comando, c'è un modo per capire di
che si tratta?

![](../../images/people/tess.png): Ovviamente si. Per capire da dove viene
preso un comando si usa `type`:

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

Nell'ultimo caso `ls` è un alias per `ls --color=auto`, ma lei sa che esiste
un comando `ls` nel filesystem. Allora può usare l'attributo `-a` di `type`
per mostrare tutte le occorrenze di un comando:

```
$ type -a ls
ls ha "ls --color=auto" come alias
ls è /bin/ls
```

Torna a [La shell](../summary.md)
