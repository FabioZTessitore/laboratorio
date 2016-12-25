# Le opzioni dei comandi

![](/images/people/tess.png): Sig. Tazza, a volte è necessario cambiare il comportamento dei comandi per ottenere il risultato voluto. Tale variazione si ottiene attraverso le *opzioni*.<br>
Facciamo subito un esempio. Conosce già il comando `ls` che le permette di ottenere la lista degli oggetti presenti nella directory corrente. Quello che forse non sa è che se aggiunge l'opzione `-l` può ottenere molte informazioni in più.
```
$ ls -l
totale 36
drwxr-xr-x  2 fabio fabio  4096 set 22 19:14 Documenti
drwxr-xr-x  2 fabio fabio  4096 giu  3 17:18 Immagini
drwxr-xr-x  2 fabio fabio  4096 ago 26  2015 Modelli
drwxr-xr-x  4 fabio fabio 12288 ott 27 14:13 Scaricati
drwxr-xr-x 25 fabio fabio  4096 ott 30 20:30 Scrivania
drwxr-xr-x  2 fabio fabio  4096 set 18 20:21 Wallpapers
drwxr-xr-x 25 fabio fabio  4096 ago 31 17:23 work
```
Non è questo il momento per  approfondire il significato di tutte queste informazioni. Tenga presente, invece, il modo in cui sono state ottenute: attraverso un'opzione, `-l`, data ad un comando, `ls`.

Provi qualche altra opzione:
```
$ ls -a
.              .gimp-2.8     Wallpapers
..             .gitconfig    work
.atom          .gnome
.bash_history  .gnome2
.bash_logout   Immagini
.bashrc        Modelli
.config        Scaricati
.cups          Scrivania
Documenti      .vim
```
L'opzione `-a` mostra tutti i file, anche quelli nascosti (hanno il nome che inizia con un puntino).

```
$ ls -t
Scrivania  Scaricati  Documenti  Wallpapers  work  Immagini  Modelli
```
L'opzione `-t` riordina in base alla data di modifica.

## Raggruppare le opzioni

![](/images/people/tess.png): Ovviamente può fornire più opzioni contemporaneamente ad un comando, come in `$ ls -l -t`, ma ricordi che le opzioni possono essere raggruppate.
```
$ ls -lt
drwxr-xr-x 25 fabio fabio  4096 ott 30 20:30 Scrivania
drwxr-xr-x  4 fabio fabio 12288 ott 27 14:13 Scaricati
drwxr-xr-x  2 fabio fabio  4096 set 22 19:14 Documenti
drwxr-xr-x  2 fabio fabio  4096 set 18 20:21 Wallpapers
drwxr-xr-x 25 fabio fabio  4096 ago 31 17:23 work
drwxr-xr-x  2 fabio fabio  4096 giu  3 17:18 Immagini
drwxr-xr-x  2 fabio fabio  4096 ago 26  2015 Modelli
```

## Opzioni con nomi lunghi

![](/images/people/tess.png): Alcune opzioni hanno nomi composti da più di una lettera. Per evitare ambiguità in questi casi si usa il doppio trattino `--`.
```
$ ls --help
Uso: ls [OPZIONE]... [FILE]...
List information about the FILEs (the current directory by default).
Sort entries alphabetically if none of -cftuvSUX nor --sort is specified.
...
```
Il doppio trattino `--` fa in modo che la parola `help` sia considerata nella sua interezza e non come un insieme di opzioni separate.

Torna a [Il prompt dei comandi](../summary.md)
