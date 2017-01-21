# Cercare

## Cercare file con `locate`

![](../../images/people/tess.png): Sig. Tazza, ogni giorno produce nuovi file,
nuovi progetti ... Avrà bisogno di qualche strumento per effettuare ricerche.

![](../../images/people/tazza.png): Potrebbero farmi comodo, senza dubbio.

![](../../images/people/tess.png): Esistono vari modi per cercare file.
Uno di questi è fornito dal comando `locate`.

`locate` è molto veloce nell'effettuare ricerche perché non cerca nel
filesystem, ma in un database interno. Ovviamente potranno essere trovati
solo i nomi dei file che sono stati aggiunti al database.

![](../../images/people/tazza.png): Devo imparare a gestire un database di nomi
per poter utilizzare `locate`?

![](../../images/people/tess.png): Non sarà necessario.
Il database può essere aggiornato solo dall'utente root mediante il comando
`updatedb`.

```
# updatedb
```

Spesso viene eseguito periodicamente sul sistema senza che l'utente
debba fare nulla.

Il file `/etc/updatedb.conf` specifica quali directory devono essere
tenute sotto controllo.

Vuole provare a fare una ricerca?

```
$ locate passwd
/etc/passwd
...
```

![](../../images/people/tess.png): Un'altra cosa. Se vuole fare ricerche senza
fare differenza tra maiuscole e minuscole c'è l'opzione `-i`

```
$ locate -i bashrc
...
```

## Cercare file con `find`

![](../../images/people/tess.png): In alternativa a `locate` c'è `find`.

&Egrave; uno strumento molto più potente anche se più lento dovendo
effettuare la ricerca nel filesystem.

![](../../images/people/tazza.png): Perché dice che è più potente se è più lento?

![](../../images/people/tess.png): Perché permette di effettuare ricerche in
base a vari criteri: nome del file, proprietà, permessi, dimensioni, data di
modifica ecc. ecc.

Visto che `find` cerca nel filesystem, si può velocizzare la ricerca limitandola
ad alcune parti di esso:

> mostra tutti i file presenti in /etc

```
$ find /etc
```

Volendo può ottenere un output più completo con l'opzione `-ls`

```
$ find /etc -ls
```

![](../../images/people/tess.png): Sig. Tazza, una nota:
a volte non avrà i permessi per effettuare ricerche in certe directory
e otterrà una serie di messaggi di errore.

Per evitare di visualizzarli può usare la redirezione dello standard error.
Ricorda come si fa?

![](../../images/people/tazza.png): Certo.

```
$ find /root -ls 2> lista_errori
ls lista_errori
... lista_errori ...
```

![](../../images/people/tess.png): Molto bene. Mi spieghi però cosa se ne
fa di quel file `lista_errori`.

In questi casi deve solo scartare quel tipo di output, quindi invece
di fare la redirezione verso un file è meglio farla verso `/dev/null`

```
$ find /root -ls 2> /dev/null
```

![](../../images/people/tess.png): `/dev/null` è il nulla, faccia attenzione a non caderci dentro!

### Cercare file per nome

![](../../images/people/tess.png): Ora le darò qualche indicazione su come
effettuare ricerche in base a vari criteri. Iniziamo cercando per nome:

> cerca un file chiamato passwd nella directory /etc

```
$ find /etc -name passwd
```

Oppure scartando gli eventuali errori dovuti a mancanza di permessi:

```
$ find /etc -name passwd 2> /dev/null
```

Per ignorare la differenza tra maiuscole e minuscole si usa `-iname`:

> cerca un file il cui nome contiene 'passwd' ignorando maiuscole e minuscole

```
$ find /etc -iname *passwd*
```

### Cercare file per dimensione

![](../../images/people/tess.png): Oltre che per nome può
cercare i file che hanno una determinata dimensione mediante l'attributo `-size`.

> cerca nella propria HOME i file più grandi di 10MB

```
$ find $HOME -size +10M
```

> cerca nella propria HOME i file più grandi di 3MB ma più piccoli di 1GB

```
$ find $HOME -size +3M -size -1G
```

### Cercare file per proprietario

![](../../images/people/tess.png): Per cercare file che hanno uno specifico
proprietario `find` mette a disposizione l'attributo `-user`:

```
$ find $HOME -user fabio -ls
```

La stessa cosa si può fare per i gruppi:

```
$ find $HOME -group fabio -ls
```

Una cosa molto utile potrebbe essere cercare file che *non* le appartengono:

```
$ find $HOME -not -user $USER -ls
```

### Cercare file con specifici permessi

![](../../images/people/tess.png): La ricerca di file con specifici permessi
viene effettuata con `find` tramite l'attributo `-perm` e permette di scovare
eventuali falle di sicurezza.

```
$ find /bin -perm 755 -ls
```

Quando il codice fornito a `-perm` non è preceduto da alcun
segno, tutti i bit devono coincidere. In questo caso, quindi,
`find` cercherà i file della directory `/bin`
che hanno permessi esattamente pari a rwxr-xr-x (755).

Quando, invece, il codice è preceduto dal segno meno,
cerca tutti i file che hanno *almeno* quei permessi.

> Cerca i file nella directory /bin che hanno permessi uguali o superiori a rwxr-xr-w

```
$ find /bin -perm -755 -ls
```

Quando il numero è preceduto dal simbolo `/`,
cerca tutti i file in cui almeno uno tra
il proprietario, il gruppo e gli altri utenti hanno
quei permessi.

Nel prossimo esempio cerca i file in cui
almeno uno tra proprietario, gruppo e altri
hanno il permesso di scrittura.

```
$ find /bin -perm /222 -ls
```

Per esempio si può utilizzare per cercare
file che hanno i permessi di scrittura aperti
agli altri, a prescindere dagli altri permessi:

```
$ find /bin -perm /002 -ls
```

### Cercare per data

![](../../images/people/tess.png): `find` permette di cercare file
che hanno subito variazioni nel tempo.

L'attributo `mtime` è utilizzato per cercare variazioni nel *contenuto* dei file.
`ctime` cerca variazioni nel *proprietario* o nei *permessi*.
`atime` cerca variazioni nell'*ultimo accesso* ai file.

Queste variazioni sono conteggiate in giorni. Se si preferisce avere i minuti
si possono usare `mmin`, `cmin`, `amin`.

> cerca i file di /etc il cui contenuto è cambiato negli ultimi 10 minuti

```
$ find /etc -mmin -10
```

> cerca file in /bin, /usr/bin, /sbin, /usr/sbin, che
hanno cambiato proprietario o permessi negli ultimi tre giorni

```
$ find /bin /usr/bin /sbin /usr/sbin -ctime -3
```

> cerca file in /var/ftp e /var/www che non hanno avuto accesso da più di 300 giorni

```
$ find /var/ftp /var/www -atime +300
```

### Combinare i criteri di ricerca

![](../../images/people/tess.png): Per combinare le ricerche esistono
gli operatori logici `-o` (or), `-and`, `-not`

```
$ find /home -user fabio -o -user claudio -ls
```

```
$ find /home -user fabio -not -group fabio -ls
```

### Eseguire comandi sui risultati di ricerca

![](../../images/people/tess.png): Contestualmente alla ricerca è possibile
eseguire comandi sui file risultato della ricerca stessa.

Esistono, a questo scopo, `-exec` ed `-ok`. La differenza tra i due sta nel fatto
che quest'ultimo chiede conferma prima di eseguire il comando.

Per esempio, esegua il comando `du -sh` sui risultati di ricerca:

```
$ find $HOME -size +30M -exec du -sh {} \;
```

Oppure esegua il comando `du` (senza opzioni) sui risultati di ricerca
e poi riordini in ordine decrescente.

```
$ find /home -size +5M -exec du {} \; | sort -nr
```

Torna a [La shell](../summary.md)

Oppure [continua a leggere](grep.md)
