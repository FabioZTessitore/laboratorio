Git e GitHub


#### Git e GitHub

##### GitHub

`GitHub.com` è un servizio online creato per facilitare la collaborazione
tra sviluppatori. Per prima cosa devi registrarti.

Una volta effettuato il primo accesso non ti sarà difficile capire come
fare per creare una nuova *repository*.

Inoltre nelle impostazioni troverai il modo per aggiungere dei collaboratori
alla repository. Non è il metodo migliore per collaborare,
ma sarà molto utile nel caso avessi bisogno di aiuto da parte di qualcuno
più esperto.

Quando crei una nuova repository ricorda di mettere la spunta
su "creazione di un file README".

##### Git

Poi c'è `git`, un sistema di controllo delle versioni
che si sposa molto bene con il servizio `GitHub`
(anche se può essere utilizzato in locale o in congiunzione con altri sistemi).

La prima volta che si utilizza `git` su un computer è opportuno effettuare
una configurazione. Le informazioni minime da fornire sono il
proprio nome utente e la propria email.

```
$ git config --global user.name "YOUR NAME HERE"
$ git config --global user.email "YOUR EMAIL HERE"
```

Assicurati che tutto sia andato bene: dovrebbe essere stato creato un file
(nascosto) `.gitconfig`

```
$ cd
$ ls -a
... .gitignore ...
$ cat .gitignore
[user]
	email = LA_SUA_EMAIL
	name = IL_SUO_NOME_UTENTE
```

<a href="/activities/1">Torna alla Parte I</a>
