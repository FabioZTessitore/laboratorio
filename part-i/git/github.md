# Git e GitHub

![](../../images/people/tess.png): Sig. Tazza, oggi le mostrerò come utilizzare
alcuni strumenti utili che le consentiranno anche di collaborare con
altre persone.

![](../../images/people/tazza.png): Interessante, di che si tratta?

## GitHub

![](../../images/people/tess.png): Il primo è `GitHub.com`. Un servizio online
creato per facilitare la collaborazione tra sviluppatori. La prima cosa
da fare è registrarsi.

Una volta effettuato il primo accesso non le sarà difficile capire come
fare per creare una nuova repository.

Inoltre nelle impostazioni troverà il modo per aggiungere dei collaboratori
alla repository. Non è il metodo migliore per collaborare,
ma sarà molto utile nel caso avesse bisogno di aiuto da parte di qualcuno
più esperto.

![](../../images/people/tazza.png): Per esempio lei?

![](../../images/people/tess.png): *&lt;tono-scherzoso&gt;Non esageri!&lt;/tono-scherzoso&gt;*

![](../../images/people/tazza.png): Lo prendo per un sì.

![](../../images/people/tess.png): Quando crea una nuova repository si ricordi di
mettere la spunta su "creazione di un file README".

## Git

![](../../images/people/tess.png): C'è poi `git`, un sistema di controllo delle versioni
che si sposa molto bene con il servizio `GitHub` (anche se può essere utilizzato
in locale o in congiunzione con altri sistemi).

### Configurazione iniziale

![](../../images/people/tess.png): La prima volta che si utilizza `git` su un computer
è opportuno effettuare una configurazione. Le informazioni minime da fornire sono il
nome utente e l'email.

```
$ git config --global user.name "YOUR NAME HERE"
$ git config --global user.email "YOUR EMAIL HERE"
```

![](../../images/people/tazza.png): Ho provato, ma non succede nulla.

![](../../images/people/tess.png): Dice? Ha provato a cercare nella sua home?
dovrebbe essere stato creato un file (nascosto) `.gitconfig`

```
$ cd
$ ls -a
... .gitignore ...
$ cat .gitignore
[user]
	email = LA_SUA_EMAIL
	name = IL_SUO_NOME_UTENTE
```

![](../../images/people/tazza.png): *&lt;annuendo&gt;C'è ... c'è&lt;/annuendo&gt;*

Torna a [Git e GitHub](../summary.md)

Oppure [continua a leggere](clone.md)
