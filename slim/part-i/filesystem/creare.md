Creare file e directory


#### Creare file e directory

Passiamo alla creazione di file e directory direttamente dalla shell.
Per poter effettuare queste operazioni devi trovarti necessariamente
all'interno della tua home (o sottodirectory di essa).

In caso contrario non potresti creare proprio niente perché un utente normale
(non amministratore) non ha il permesso di scrivere al di fuori della propria home.

> Assicurati di essere nella home

```
$ cd
$ pwd
/home/fabio
```

##### Creare un file vuoto

Inizia creando un file vuoto. Il comando da utilizzare è `touch`:

```
$ touch prova
$ ls
... prova ...
```

##### Creare una directory

Per le directory c'è invece `mkdir`:

```
$ mkdir test
$ ls
... test ...
```

##### Esempio

Immagina di voler creare nella home le directory
`progetti/javascript/helloworld/` e di voler inserire il file `hello.js`
all'interno di `helloworld/`:

```
$ cd                    # assicuriamoci di essere nella home
$ mkdir progetti        # crea progetti/ ed entra
$ cd progetti
$ mkdir javascript      # crea javascript/ ed entra
$ cd javascript
$ mkdir helloworld      # crea helloworld/ ed entra
$ cd helloworld
$ touch hello.js        # infine crea il file hello.js
```

Quando devi creare tante directory una dentro l'altra può usare una scorciatoia.
Aggiungi l'opzione `-p` a `mkdir`:

> Nota: attraverso l'interfaccia grafica cancella le directory create in precedenza
altrimenti non potrai ricrearle

```
$ cd
$ mkdir -p progetti/javascript/helloworld
$ cd progetti/javascript/helloworld      # usa <TAB>, mi raccomando
$ touch hello.js
```

<a href="/activities/1">Torna alla Parte I</a>
