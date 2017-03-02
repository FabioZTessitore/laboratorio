Le pagine del manuale


#### Le pagine del manuale

La shell di Linux è uno strumento molto potente e non è semplice
ricordare tutto. In aiuto ci sono le *pagine del manuale*.

Immagina di voler stampare la data corrente nel formato gg/mm/anno.
Per iniziare prova a chiamare il comando `date`:

```
$ date
mer  9 nov 2016, 21.43.59, CET
```

`date` fa il suo lavoro, ma il formato in cui viene stampata la data non è quello desiderato.
Prova a consultare le pagine del manuale:

```
$ man date
```

```
DATE(1)

NAME
       date - print or set the system date and time

SYNOPSIS
       date [OPTION]... [+FORMAT]
       date [-u|--utc|--universal] [MMDDhhmm[[CC]YY][.ss]]

DESCRIPTION
       Display the current time in the given FORMAT, or set the system date.
...
```

Nella parte alta si legge come usare il comando.
In questo caso `date [OPTION]... [+FORMAT]`.
Le parentesi quadre indicano argomenti ed opzioni facoltative.
Scorrendo la pagina troviamo la lista dei possibili formati di stampa della data.

Mettendo insieme otteniamo:

```
$ date +%x
09/11/2016
```

oppure, se preferisci un maggiore controllo:

```
$ date +%d-%m-%Y
09-11-2016
```

<a href="/activities/1">Torna alla Parte I</a>
