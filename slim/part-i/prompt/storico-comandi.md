Storico dei comandi



#### Storico dei comandi

###### Tasti Freccia

La shell di Linux è uno strumento molto potente, ma a volte le operazioni risultano ripetitive.

Esistono, però, diversi modi per semplificare e velocizzare il lavoro.

La shell memorizza i comandi eseguiti e permette di richiamarli in maniera facile e veloce
premendo i tasti <kbd>FRECCIA SU</kbd> e <kbd>FRECCIA GIU</kbd>.
Quando si trova quello che si stava cercando non bisogna fare altro che premere <kbd>Invio</kbd> come al solito.

###### Il comando `history`

Usare i tasti freccia semplifica il lavoro, soprattutto quando bisogna digitare comandi lunghi e complessi,
ma resta il problema che bisogna mettersi a cercare e se il comando cercato non veniva digitato da molto
tempo la ricerca sarà lenta e noiosa.

Possiamo allora utilizzare il comando `history`.

`history` mostra la lista dei comandi digitati insieme ad un comodo indice.

```
$ history
...
43 ls
44 tail -n 2 /etc/passwd
...
```

Per lanciare il comando `tail` con indice 44:

```
$ !44
```

Se prima di richiamare il comando si vogliono fare delle modifiche c'è `fc`.
Si aprirà l'editor di testi predefinito di sistema dove sarà possibile
modificare il comando a piacere. Quando è pronto basta salvare ed uscire
dall'editor.

```
$ fc 44
```

###### Ricerca all'indietro

La shell di Linux mette a disposizione vari strumenti per eseguire certe operazioni.
In questo modo ognuno troverà quello che più si addice alle proprie esigenze.

Prova la combinazione di tasti <kbd>CTRL+R</kbd>.
Da questo momento in poi ogni volta che digiterai un carattere il terminale
effettuerà una ricerca all'indietro (dal più recente al più vecchio)
mostrando il comando trovato.

###### Completamento automatico

Un'altra cosa. Quando digiti i comandi, i nomi di file e directory ecc.,
ricorda che il tasto `TAB` è tuo amico.
Permette il completamento automatico facendo risparmiare tempo e fatica evitando
anche errori di battitura.

<a href="/activities/1">Torna alla Parte I</a>
