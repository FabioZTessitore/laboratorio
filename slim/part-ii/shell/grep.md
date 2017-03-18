Cercare nei file


#### Cercare nei file

A volte c'è bisogno non di cercare un particolare
file, ma di cercare del testo all'interno di un file o di un gruppo di file.

A questo scopo si usa il comando `grep`.

> cerca la stringa PS1 in $HOME/.bashrc

```
$ grep PS1 ~/.bashrc
```

Ovviamente `grep` può essere usato mediante pipe (`|`) per
fare ricerche sullo standard output. Immagina infatti
un comando che restituisce molto testo e di essere
interessato solo alle linee contenenti certe parole.

> cerca i comandi git nello storico

```
$ history | grep git
```

`grep` è corredato di tante opzioni utili:

`-i`    ignora maiuscole e minuscole

`-v`    mostra solo le righe che *non* contengono il testo

`-r`    ricerca ricorsiva nella directory

`-l`    (usato con -r) mostra solo i nomi dei file in cui è presente il testo

`--color`   colora le parole cercate

<a href="/activities/2">Torna alla Parte II</a>
