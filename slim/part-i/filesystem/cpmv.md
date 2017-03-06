Copiare, Spostare, Rinominare


#### Copiare, Spostare, Rinominare

Per concludere questo argomento vediamo come copiare, spostare e rinominare file e directory.

##### Copiare

Inizia creando un file nella home:

```
$ cd
$ touch test
$ ls
... test ...
```

Prova a farne una copia con `cp`:

```
$ cp test test2
$ ls
... test test2 ...
```

##### Spostare e Rinominare

Per rinominare un file usa `mv`:

```
$ mv test test_nuovo
$ ls
... test2 test_nuovo ...
```

Il comando `mv` serve anche a spostare un file.

```
$ mkdir prog
$ touch esercizio.c     # OOOPS doveva andare in prog/
$ mv esercizio.c prog
```

##### Copiare directory

Per copiare una directory si usa sempre `cp`, ma bisogna aggiungere
l'opzione `-r` affinché la copia sia ricorsiva.

Crea una directory `progetti` e inserisci al suo interno vari file e directory.
Infine prova a copiarla:

```
$ cp -r progetti progetti_backup_2016_11_27
```

Ricorda. Per spostare o rinominare una directory (comando `mv`) non è
necessaria l'opzione `-r`. Infatti in questi casi stai modificando
il nome e/o la posizione della directory, ma non il suo contenuto.<br>
Se, invece, vuoi copiarla, devi fare una copia di tutto ciò che contiene e
quindi devi usare l'opzione `-r` per effettuare un'operazione ricorsiva.

<a href="/activities/1">Torna alla Parte I</a>
