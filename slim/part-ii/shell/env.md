L'ambiente della shell


#### L'ambiente della shell

Se hai provato a creare alias e hai riavviato il computer ti sarai
accorto di averli persi.

##### I file di configurazione della shell

La shell, per poter svolgere i propri compiti,
utilizza alcuni file di configurazione. Evidentemente non hai salvato i tuoi
alias all'interno di questi file.

Utilizzando la shell `bash`, una delle più comuni, ci sono cinque file
di configurazione. (Tieni presente che non necessariamente
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

`/etc/profile` e `/etc/bashrc` non puoi toccarli, servono i permessi di amministratore.

`~/.bash_profile` sulla mia macchina neanche c'è.

`~/.bash_logout` non fa altro che pulire lo schermo quando esce.

L'unico interessante è `~/.bashrc`.

Se non riesci a trovarlo fai attenzione al fatto che è un file nascosto
(il nome inizia con il `.`).

##### Alias permanenti

A questo punto possiamo creare un alias che sia sempre presente nel sistema.
Devi definirlo all'interno del file `.bashrc` presente in home.

Apri il file e alla fine aggiungi la riga:

```
alias d='date +%D'
```

Infine salva ed esci dall'editor.

Non dimenticare che il file `.bashrc` viene eseguito al login o quando
si apre una nuova shell. Se vuoi forzarne la rilettura:

```
$ source $HOME/.bashrc
```

##### Modificare il prompt dei comandi

Sempre nel file `.bashrc`, se cerci bene, troverai la definizione
di una variabile chiamata `PS1`. Essa determina come verrà visualizzato
il prompt dei comandi.

Mi raccomando, fai una copia di backup del file prima di iniziare ad
effettuare modifiche. Linux permette l'accesso ai file di configurazione,
ma se rompi qualcosa i cocci sono tuoi.

##### Aggiungere variabili di ambiente

Così come viene definita `PS1`,
puoi creare anche altre variabili in base alle esigenze.

Immagina di avere una directory con i tuoi
progetti annidata all'interno di molte altre directory.
Una cosa del tipo `~/projects/work/javascript/models/`

Invece di scrivere ogni volta:

```
$ cd ~/projects/work/javascript/models/
```

puoi creare una variabile, `P`, sempre in `.bashrc`:

```
P=$HOME/projects/work/javascript/models/
```

e quindi scrivere:

```
$ cd $P
```

per raggiungere la tua directory.

<a href="/activities/2">Torna alla Parte II</a>
