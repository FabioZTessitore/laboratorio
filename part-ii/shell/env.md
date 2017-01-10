# L'ambiente della shell

![](../../images/people/tazza.png): Sig. Tessitore, non so come dirglielo ...

![](../../images/people/tess.png): Non mi faccia preoccupare, che succede?

![](../../images/people/tazza.png): Ho perso tutti gli alias.

![](../../images/people/tess.png): Sig. Tazza, come si fa a perdere un alias?

![](../../images/people/tazza.png): Non scherzi. Ho riavviato il computer
e tutti gli alias che avevo creato sono spariti!

## I file di configurazione della shell

![](../../images/people/tess.png): La shell per poter svolgere i propri compiti
utilizza alcuni file di configurazione. Evidentemente non ha salvato i suoi
alias all'interno di questi file.

![](../../images/people/tazza.png): Credevo che il comando `alias` permettesse
la creazione di `alias` permanenti, evidentemente mi sbagliavo.

![](../../images/people/tess.png): Utilizzando la shell `bash`, una delle più
comuni, ci sono cinque file di configurazione. (Tenga presente che non necessariamente
devono esserci tutti).

<table>
<tr>
<td>File</td><td>Descrizione</td><td>Eseguito</td>
</tr>
<tr>
<td>/etc/profile</td><td>configurazione generale di tutti gli utenti</td><td>login</td>
</tr>
<tr>
<td>/etc/bashrc</td><td>configurazione generale di tutti gli utenti, shell bash</td><td>ogni nuova shell</td>
</tr>
<tr>
<td>~/.bash_profile</td><td>configurazione specifica per ogni utente</td><td>login</td>
</tr>
<tr>
<td>~/.bashrc</td><td>configurazione specifica per ogni utente, shell bash</td><td>login e ogni nuova shell</td>
</tr>
<tr>
<td>~/.bash_logout</td><td></td><td>uscita</td>
</tr>
</table>

![](../../images/people/tazza.png): E devo modificare tutti questi file?

![](../../images/people/tess.png): Ma no. `/etc/profile` e `/etc/bashrc` non può
toccarli, servono i permessi di amministratore.

`~/.bash_profile` sulla mia macchina neanche c'è.

`~/.bash_logout` non fa altro che pulire lo schermo quando esce.

L'unico interessante è `~/.bashrc`.

![](../../images/people/tazza.png): Non riesco a trovarlo.

![](../../images/people/tess.png): Guardi che il nome inizia con il `.`. Ricorda
cosa significa?

![](../../images/people/tazza.png): Giusto. &Egrave; un file nascosto!

## Alias permanenti

![](../../images/people/tess.png): Come le stavo dicendo, se vuole
creare un alias che sia sempre presente nel sistema lo deve
definire all'interno del file `.bashrc` presente nella sua home.

Apra il file e alla fine aggiunga la riga

```
alias d='date +%D'
```

Infine salvi ed esca dall'editor.

![](../../images/people/tazza.png): Fatto, ma non succede nulla.

![](../../images/people/tess.png): Cosa vuole che succeda? Il file `.bashrc`
viene eseguito al login o quando si apre una nuova shell.

Se proprio ne vuole forzare la rilettura:

```
$ source $HOME/.bashrc
```

![](../../images/people/tazza.png): Perché ha scritto `$HOME`, non bastava `~`
oppure accertarsi di essere nella propria home?

![](../../images/people/tess.png): Certo, volevo solo tentare di metterla in difficoltà.

## Modificare il prompt dei comandi

![](../../images/people/tess.png): Sig. Tazza, ora che ha fatto amicizia con
il file `.bashrc` posso dirle un'altra cosa. Se cerca bene troverà la definizione
di una variabile chiamata `PS1`. Essa determina come verrà visualizzato
il prompt dei comandi.

Mi raccomando, faccia una copia di backup del file prima di iniziare ad
effettuare modifiche. Linux le permette l'accesso ai file di configurazione,
ma se rompe qualcosa i cocci sono suoi.

## Aggiungere variabili di ambiente

![](../../images/people/tess.png): Così come viene definita `PS1`,
può creare anche altre variabili in base alle esigenze.

![](../../images/people/tazza.png): Può farmi un esempio?

![](../../images/people/tess.png): Immagini di avere una directory con i suoi
progetti annidata all'interno di molte altre directory.
Una cosa del tipo `~/projects/work/javascript/models/`

Invece di scrivere ogni volta:

```
$ cd ~/projects/work/javascript/models/
```

può creare una variabile, `P`, sempre in `.bashrc`:

```
P=$HOME/projects/work/javascript/models/
```

e quindi scrivere:

```
$ cd $P
```

per raggiungere la sua directory

Torna a [La shell](../summary.md)
