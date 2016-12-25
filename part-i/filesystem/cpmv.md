# Copiare, Spostare, Rinominare

![](../../images/people/tess.png): Sig. Tazza, per concludere questo argomento
le mostrerò come copiare, spostare e rinominare file e directory.

![](../../images/people/tazza.png): Sono curioso, infatti spesso ho fatto errori
di battitura mentre mi esercitavo a creare file e directory e sono stato costretto
ad usare l'interfaccia grafica per correggerli.

## Copiare

![](../../images/people/tess.png): Per iniziare crei un file nella sua home:

```
$ cd            # si assicuri di essere nella sua home
$ touch test
$ ls
... test ...
```

Possiamo provare a farne una copia con `cp`:

```
$ cp test test2
$ ls
... test test2 ...
```

## Spostare e Rinominare

![](../../images/people/tazza.png): Sembra abbastanza semplice, ma se non volessi
mantenere il file originale?

![](../../images/people/tess.png): Intende dire che vuole solo cambiare nome ad un file?

![](../../images/people/tazza.png): Esatto.

![](../../images/people/tess.png): Allora deve rinominarlo con `mv`

```
$ mv test test_nuovo
$ ls
... test2 test_nuovo ...
```

![](../../images/people/tess.png): Forse avrà intuito dal nome che il comando `mv` serve
anche a spostare un file.

```
$ mkdir prog
$ touch esercizio.c     # OOOPS doveva andare in prog/
$ mv esercizio.c prog
```

![](../../images/people/tazza.png): Ah bene. Allora posso iniziare a riorganizzare
la mia cartella `home` usando solo la shell!

## Copiare directory

![](../../images/people/tazza.png): Ehm ... c'è un problema.

![](../../images/people/tess.png): Che le succede?

![](../../images/people/tazza.png): Ho una directory chiamata `progetti` e volevo
farne una copia di sicurezza, ma `cp` non sembra funzionare.

![](../../images/people/tess.png): `progetti` è una directory. Ha usato l'opzione `-r`?

```
$ cp -r progetti progetti_backup_2016_11_27
```

![](../../images/people/tazza.png): Evidentemente no, ma per `mv` non era necessario.

![](../../images/people/tess.png): Sig. Tazza, non si confonda. Se usa `mv` sta
modificando il nome e/o la posizione di una directory, ma non il suo contenuto.<br>
Se, invece, vuole copiarla, deve fare una copia di tutto ciò che contiene e
quindi deve usare l'opzione `-r` per effettuare un'operazione ricorsiva.

Torna a [Il filesystem](../summary.md)
