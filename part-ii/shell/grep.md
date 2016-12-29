# Cercare nei file

![](../../images/people/tess.png): A volte le capiterà di fare ricerche
all'interno di file di testo.

A questo scopo si usa il comando `grep`.

```
$ grep PS1 ~/.bashrc
```

Ovviamente grep può essere usato anche per
fare ricerche sullo standard output. Si immagini infatti
un comando che restituisce molto testo e che si sia
interessati solo alle linee contenenti un certo testo.

grep è corredato di tante opzioni utili:

`-i`    ignora maiuscole e minuscole
`-v`    mostra solo le righe che NON contengono il testo
`-r`    ricerca ricorsiva nella directory
`-l`    (usato con -r) mostra solo i nomi dei file in cui è presente il testo

`--color`   colora le parole cercate

Torna a [La shell](../summary.md)
