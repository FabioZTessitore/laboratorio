# Cambiare proprietario

![](../../images/people/tazza.png): Sig. Tessitore, ma se voglio leggere il contenuto
di un file che non mi appartiene mi basterà cambiare il proprietario ...

![](../../images/people/tess.png): Calma, calma, Sig. Tazza. Un utente normale non può
cambiare il proprietario di un file che non gli appartiene. Questa operazione
può essere eseguita solo dall'utente `root`.

Le faccio vedere un esempio, però tenga presente che non tutte le distribuzioni
permettono di diventare `root` in questo modo. Alcune usano altri sistemi come `sudo`.

```
$ su      # diventare utente root
# touch test
# ls -l test
-rw-r--r-- 1 root root 0 dic  8 16:33 test

# chown fabio test    # cambia il proprietario
# ls -l test
-rw-r--r-- 1 fabio root 0 dic  8 16:33 test

# chown fabio:fabio test  # cambia proprietario e gruppo
# ls -l test
-rw-r--r-- 1 fabio fabio 0 dic  8 16:33 test

# exit
$
```

Torna a [I permessi](../summary.md)
