# Comandi in background

![](../../images/people/tess.png): Ci sono casi in cui dopo aver lanciato
un comando il terminale non è più disponibile.
Può succedere perché un comando impiega tempo per
portare a termine il proprio lavoro, oppure perché apre una finestra.
In questi casi la shell resta occupata e non è possibile lanciare altri comandi.

![](../../images/people/tazza.png): Non mi tenga sulle spine.

![](../../images/people/tess.png): L'operatore `&` permette di lanciare
un comando in background così da evere la shell libera. Provi:

```
$ gedit &
```

![](../../images/people/tazza.png): E una volta andato in background
si può recuperare questo comando o è perduto per sempre?

![](../../images/people/tess.png): Per far tornare in primo piano
(foreground) il comando lanciato precedentemente in background
si usa `fg`

```
$ fg
```

Torna a [La shell](../summary.md)

Oppure [continua a leggere](espansione.md)
