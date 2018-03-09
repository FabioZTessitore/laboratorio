# Creare file e directory

![](../../images/people/tess.png): Sig. Tazza, è arrivato il momento di vedere come
creare file e directory direttamente dalla shell. Per poter effettuare queste operazioni
deve trovarsi necessariamente all'interno della sua home (o sottodirectory di essa).

![](../../images/people/tazza.png): E che succede se mi trovo in un'altra directory?

![](../../images/people/tess.png): Proprio niente. Un utente normale (non amministratore)
non ha il permesso di scrivere al di fuori della propria home.

```
$ cd
$ pwd
/home/fabio
```

## Creare un file vuoto

![](../../images/people/tess.png): Iniziamo con il creare un file vuoto.
Il comando da utilizzare è `touch`:

```
$ touch prova
$ ls
... prova ...
```

## Creare una directory
![](../../images/people/tess.png): Per le directory c'è invece `mkdir`:

```
$ mkdir test
$ ls
... test ...
```

## Esempio
![](../../images/people/tess.png): Immagini di voler creare nella sua home le directory
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

![](../../images/people/tazza.png): Ormai mi ha abituato a trovare scorciatoie quando
le operazioni sono lunghe e noiose. Qui non possiamo fare niente per evitare
tutti quei passaggi?

![](../../images/people/tess.png): Sig. Tazza, ormai non posso nasconderle niente!
Quando deve creare tante directory una dentro l'altra può usare l'opzione `-p` di `mkdir`:

> Nota: attraverso l'interfaccia grafica cancelli le directory create in precedenza
altrimenti non potrà ricrearle

```
$ cd
$ mkdir -p progetti/javascript/helloworld
$ cd progetti/javascript/helloworld      # usi <TAB>, mi raccomando
$ touch hello.js
```

Torna a [Il filesystem](../summary.md)

Oppure [continua a leggere](rimuovere.md)
