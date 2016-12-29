# Cercare

## Cercare file con `locate`

![](../../images/people/tess.png): Sig. Tazza, ogni giorno produce nuovi file,
nuovi progetti ... Avrà bisogno di qualche strumento per effettuare ricerche.

![](../../images/people/tazza.png): Potrebbero farmi comodo, senza dubbio.

![](../../images/people/tess.png): Esistono vari modi per cercare file
all'interno del filesystem di Linux. Uno di questi è fornito dal comando `locate`.

`locate` è molto veloce nell'effettuare ricerche perché non cerca nel
filesystem, ma in un database interno. Ovviamente solo i nomi dei file
che sono stati aggiunti al database possono essere cercati.

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
a volte non avendo i permessi per effettuare ricerche in certe directory
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

Torna a [La shell](../summary.md)
