# L'ambiente della shell

I file di configurazione della shell sono:

/etc/profile    configurazione di tutti gli utenti,
                eseguito al login

/etc/bashrc     configurazione di tutti gli utenti,
                eseguito ogni volta che si apre una shell bash

~/.bash_profile configurazione specifica per ogni utente,
                eseguito al login

~/.bashrc       configurazione specifica della shell bash,
                eseguito al login e per ogni nuova shell
                aperta (definire qui gli alias)

~/.bash_logout  eseguito all'uscita


Se vogliamo creare un alias che sia
sempre presente nel sistema lo possiamo
definire all'interno del file .bashrc
Apriamo il file e alla fine aggiungiamo la riga

alias d='date +%D'

Salviamo e chiudiamo il file.

Siccome il file .bashrc viene letto al login
e quando si apre una nuova shell non sarà
immediatamente disponibile.
Per evitare di aprire una nuova shell si può
far rileggere il file di configurazione con:

$ source $HOME/.bashrc
[riesegue il file di configurazione .bashrc
presente nella cartella $HOME dell'utente,
equivalente a ~/.bashrc]


Impostare il prompt

Sempre in .bashrc è presente la definizione
della variabile PS1 che determina come
verrà visualizzato il prompt dei comandi.
Si può provare a modificare tale valore
(meglio fare una copia di backup di .bashrc)


Aggiungere variabili di ambiente

Le variabili di ambiente possono essere anche
aggiunte dall'utente. Immaginiamo ad esempio
di avere una directory con i nostri progetti
annidata all'interno di molte altre directory
(~/projects/work/javascript/models/)
Invece di scrivere ogni volta

$ cd ~/projects/work/javascript/models/

possiamo creare una variabile all'interno del
file .bashrc:

P=$HOME/projects/work/javascript/models/

e quindi scrivere

$ cd $P

per raggiungere la nostra directory

![](../../images/people/tess.png):
![](../../images/people/tess.png):
![](../../images/people/tess.png):
![](../../images/people/tess.png):
![](../../images/people/tess.png):
![](../../images/people/tess.png):
![](../../images/people/tess.png):
![](../../images/people/tess.png):

Torna a [La shell](../summary.md)
