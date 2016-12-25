# Le pagine del manuale

![](/images/people/tazza.png): Sig. Tessitore, sono esterrefatto. Non pensavo che si potessero fare tante cose con un'interfaccia a riga di comando.

![](/images/people/tess.png): Ed è solo la punta dell'iceberg ...

![](/images/people/tazza.png): Ma se ci sono così tante cose come faccio a ricordarle tutte?

![](/images/people/tess.png): Caro Sig. Tazza, come sempre ricorderà solo le cose che usa più spesso. Per il resto ci sono le *pagine del manuale*.

Le faccio un esempio. Immagini di voler stampare la data corrente nel formato gg/mm/anno. Per iniziare provi a chiamare il comando `date`:
```
$ date
mer  9 nov 2016, 21.43.59, CET
```
`date` fa il suo lavoro, ma il formato in cui viene stampata la data non è quello desiderato.
Provi a consultare le pagine del manuale:
```
$ man date
```
![man-date](/images/part1/prompt/man-date.png)

Nella parte alta può leggere come si usa il comando. In questo caso `date [OPTION]... [+FORMAT]`. Le parentesi quadre indicano argomenti ed opzioni facoltative. Scorrendo la pagina troviamo la lista dei possibili formati di stampa della data.<br>
Mettendo insieme otteniamo:
```
$ date +%x
09/11/2016
```
oppure, se preferisce un maggiore controllo:
```
$ date +%d-%m-%Y
09-11-2016
```

Torna a [Il prompt dei comandi](../summary.md)
