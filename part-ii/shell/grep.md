# Cercare nei file

![](../../images/people/tess.png): A volte avrà bisogno non di cercare un particolare
file, ma di cercare del testo all'interno di un file o di un gruppo di file.

A questo scopo si usa il comando `grep`.

> cerca la stringa PS1 in $HOME/.bashrc

```
$ grep PS1 ~/.bashrc
```

Ovviamente `grep` può essere usato mediante pipe per
fare ricerche sullo standard output. Si immagini infatti
un comando che restituisce molto testo e che si sia
interessati solo alle linee contenenti certe parole.

> cerca i comandi git nello storico

```
$ history | grep git
```

![](../../images/people/tess.png): `grep` è corredato di tante opzioni utili:

`-i`    ignora maiuscole e minuscole
`-v`    mostra solo le righe che NON contengono il testo
`-r`    ricerca ricorsiva nella directory
`-l`    (usato con -r) mostra solo i nomi dei file in cui è presente il testo

`--color`   colora le parole cercate

Torna a [La shell](../summary.md)
