Effettuare modifiche


#### Effettuare modifiche

Una volta all'interno della directory `test`
puoi modificare il contenuto del file `README.md` aggiungendo una piccola descrizione:

```
$ vim README.md   # qualunque editor va bene
```

A questo punto entra in gioco `git`; affinché il sistema tenga traccia
delle modifiche effettuate i comandi da eseguire sono i seguenti:

```
$ git add README.md
$ git commit -m "breve messaggio di descrizione della modifica effettuata"
$ git push origin master
```

In ogni momento puoi chiedere lo stato con

```
$ git status
```

Se tutto è andato per il verso giusto sul sito dovrà comparire la versione
modificata del file `README.md`.

<a href="/activities/1">Torna alla Parte I</a>
