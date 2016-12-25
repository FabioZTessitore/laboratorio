# Il prompt dei comandi

## Il prompt

![](../../images/people/tazza.png): Ho aperto un terminale, e ora?

![](../../images/people/tess.png): Molto probabilmente vedrà un testo simile a questo:
```
fabio@debian ~ $
```
Quello che vede è il *prompt*. Il terminale la informa che il nome utente è `fabio`, che il nome del computer su cui sta lavorando è `debian`, che si trova nella sua directory personale `~` (di questo riparleremo in seguito) e che lei è un utente normale `$`, non ha i poteri di amministratore. Inoltre il terminale è in attesa dei suoi comandi.


## I primi comandi

![](../../images/people/tazza.png): E cosa posso fare ora?

![](../../images/people/tess.png): Caro Sig. Tazza, il terminale è in attesa dei suoi ordini.

![](../../images/people/tazza.png): Ehm ... se solo sapessi cosa chiedere ...

![](../../images/people/tess.png): Per cominciare provi a chiedere il giorno e l'ora.
```
$ date
dom 30 ott 2016, 20.55.33, CET
```
Come può vedere, dare un comando è semplicissimo. Deve solo scriverne il nome e battere <kbd>Invio</kbd>.

![](../../images/people/tess.png): Continui, continui a provare. Chieda qual è il nome del computer ad esempio.
```
$ hostname
debian
```
Oppure qual è la directory in cui si trova:
```
$ pwd
/home/fabio
```
Infine provi a chiedere la lista di file e directory presenti nella directory corrente:
```
$ ls
Documenti  Immagini  Modelli  Scaricati  Scrivania  Wallpapers  work
```

![](../../images/people/tazza.png): Ma è *&lt;meraviglia&gt;bellissimo!!!&lt;/meraviglia&gt;*

Torna a [Il prompt dei comandi](../summary.md)
