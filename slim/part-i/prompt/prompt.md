Il prompt dei comandi



#### Il prompt

Una volta aperto un terminale, molto probabilmente vedrai un testo simile a questo:

```
fabio@debian ~ $
```

&Egrave; il *prompt*. Il terminale informa che il nome utente è `fabio`,
che il nome del computer su cui stai lavorando è `debian`,
che ti trovi nella tua directory personale, indicata con `~`,
e che sei un utente normale (simbolo `$`), non hai quindi i poteri di amministratore.
Inoltre il terminale è in attesa di ricevere comandi.


#### I primi comandi

Per cominciare chiedi data e ora:

```
$ date
dom 30 ott 2016, 20.55.33, CET
```

Dare un comando è semplicissimo, devi solo scriverne il nome e battere <kbd>Invio</kbd>.

Continua chiedendo qual è il nome del computer:

```
$ hostname
debian
```

Oppure qual è la directory in cui ti trovi:

```
$ pwd
/home/fabio
```

Infine prova a chiedere la lista di file e directory presenti nella directory corrente:

```
$ ls
Documenti  Immagini  Modelli  Scaricati  Scrivania  Wallpapers  work
```

<a href="/activities/1">Torna alla Parte I</a>
