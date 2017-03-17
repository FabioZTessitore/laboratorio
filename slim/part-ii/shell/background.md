Comandi in background


#### Comandi in background

Ci sono casi in cui dopo aver lanciato un comando il terminale non è più disponibile.
Può succedere perché un comando impiega tempo per
portare a termine il proprio lavoro, oppure perché apre una finestra.
In questi casi la shell resta occupata e non è possibile lanciare altri comandi.

L'operatore `&` permette di lanciare
un comando in background così da avere la shell libera. Prova:

```
$ gedit &
```

Per far tornare in primo piano
(foreground) il comando lanciato precedentemente in background
si usa `fg`

```
$ fg
```

<a href="/activities/2">Torna alla Parte II</a>
