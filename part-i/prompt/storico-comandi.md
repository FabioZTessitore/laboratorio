# Storico dei comandi

## Tasti Freccia

![](/images/people/tazza.png): Sig. Tessitore, la shell di Linux è uno strumento molto potente, ma a volte le operazioni risultano ripetitive. Apprezzo molto la sensazione di controllo che mi dà scrivere le operazioni direttamente da terminale, ma non c'è un modo per semplificarsi la vita?

![](/images/people/tess.png): Sig. Tazza, non uno, ma svariati modi! La shell di Linux memorizza i comandi da lei eseguiti e le permette di richiamarli in maniera facile e veloce premendo i tasti <kbd>FRECCIA SU</kbd> e <kbd>FRECCIA GIU</kbd>. Quando trova quello che stava cercando non deve fare altro che premere <kbd>Invio</kbd> come al solito.

![](/images/people/tazza.png): Fantastico ...

![](/images/people/tess.png): Non sembra molto contento.

## Il comando `history`

![](/images/people/tazza.png): No, no. Usare i tasti freccia semplifica il lavoro, soprattutto quando bisogna digitare comandi lunghi e complessi, ma resta il problema che bisogna mettersi a cercare e se il comando cercato non veniva digitato da molto tempo la ricerca sarà lenta e noiosa.

![](/images/people/tess.png): Capisco. Quello che le serve è il comando `history`.<br>
`history` le mostrerà la lista dei comandi digitati insieme ad un comodo indice.
```
$ history
...
43 ls
44 tail -n 2 /etc/passwd
...
```
Per lanciare il comando `tail` con indice 44 può fare:
```
$ !44
```

![](/images/people/tazza.png): A questo punto scommetto che se volessi richiamare il comando numero 44 modificando il numero di linee da visualizzare c'è un modo per farlo.

![](/images/people/tess.png): E vincerebbe la scommessa. Invece di usare il `!` usi `fc`. Si aprirà l'editor di testi predefinito di sistema, potrà modificare il comando a piacere e quando sarà pronto le basterà salvare ed uscire dall'editor per vederlo andare in esecuzione.
```
$ fc 44
```

## Ricerca all'indietro

![](/images/people/tazza.png): Sig. Tessitore, mi aveva promesso svariati modi per semplificare il lavoro. Mi sorprenda ancora.

![](/images/people/tess.png): Sig. Tazza, fa bene a non accontentarsi. Se ci sono più strumenti ognuno troverà quello che più si addice alle proprie esigenze.

Provi a premere la combinazione di tasti <kbd>CTRL+R</kbd>. Da questo momento in poi ogni volta che digiterà un carattere il terminale effettuerà una ricerca all'indietro (dal più recente al più vecchio) mostrandole il comando trovato.

## Completamento automatico

![](/images/people/tess.png): Sig. Tazza, volevo ricordarle un'altra cosa. Quando digita i comandi, i nomi di file e directory ecc., si ricordi che il tasto `TAB` è suo amico. Le permetterà il completamento automatico facendole risparmiare molto tempo e fatica e allo stesso tempo evitandole errori di battitura.

Torna a [Il prompt dei comandi](../summary.md)
