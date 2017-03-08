Cambiare proprietario


#### Cambiare proprietario

Un utente normale non può cambiare il proprietario di un file che non gli appartiene.
Questa operazione può essere eseguita solo dall'utente `root`.

Facciamo un esempio, però tieni presente che non tutte le distribuzioni
permettono di diventare `root` in questo modo.

```
$ su      # diventa utente root
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

<a href="/activities/1">Torna alla Parte I</a>
