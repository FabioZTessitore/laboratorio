# Cercare

## Cercare file con locate

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


![](../../images/people/tess.png):
![](../../images/people/tess.png):

Torna a [La shell](../summary.md)
