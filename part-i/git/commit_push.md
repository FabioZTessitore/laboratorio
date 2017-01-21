# Effettuare modifiche

![](../../images/people/tess.png): Una volta all'interno della directory `test`
può modificare il contenuto del file `README.md` aggiungendo una piccola descrizione:

```
$ vim README.md   # qualunque editor va bene
```

A questo punto entra in gioco `git`; affinché il sistema tenga traccia
delle modifiche effettuate i passaggi da eseguire sono i seguenti:

```
$ git add README.md
$ git commit -m "breve messaggio di descrizione della modifica effettuata"
$ git push origin master
```

In ogni momento si può chiedere lo stato con

```
$ git status
```

Se tutto è andato per il verso giusto sul sito dovrà comparire la versione
modificata del file `README.md`

![](../../images/people/tazza.png): Lei si rende conto che la cosa è incomprensibile, vero?

![](../../images/people/tess.png): Si, ma per il momento va bene così. Memorizzi questi
comandi, tra un attimo le mostrerò come utilizzarli per collaborare con un'altra persona.

Torna a [Git e GitHub](../summary.md)

Oppure [continua a leggere](collaborazione.md)
