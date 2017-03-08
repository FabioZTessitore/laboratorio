Cambiare i permessi


#### Cambiare i permessi

Se vuoi evitare che altri utenti leggano il contenuto dei tuoi file devi cambiare
i permessi.

##### Cambiare i permessi con i numeri

Ai vari permessi sono associati dei numeri:

`r` = 4

`w` = 2

`x` = 1

Ad es., se sono stati impostati i permessi `r--` il valore corrispondente sarà 4.
Invece `rw-` corrisponde a `4 + 2 = 6`.

Allo stesso modo `r-x` è equivalente a `4 + 1 = 5` e `rwx` a `4 + 2 + 1 = 7`.

Il comando che permette di cambiare i permessi è `chmod`:

```
$ touch file_test
$ chmod 777 file_test
$ ls -l file_test
-rwxrwxrwx 1 fabio fabio    0 dic  8 16:02 file_test

$ chmod 755 file_test
$ ls -l file_test
-rwxr-xr-x 1 fabio fabio    0 dic  8 16:02 file_test

$ chmod 644 file_test
$ ls -l file_test
-rw-r--r-- 1 fabio fabio    0 dic  8 16:02 file_test
```

##### Cambiare i permessi con le lettere

I permessi possono essere aggiunti e tolti anche mediante i simboli `+` e `-`;
ad es. `+r` aggiunge il permesso di lettura, `-r` lo elimina.

Usando le lettere bisogna specificare a chi si vogliono aggiungere o togliere permessi:

`u` utente proprietario (user)

`g` gruppo (group)

`o` gli altri (others)

`a` tutti (all)

```
$ touch file_test2
$ ls -l file_test2
-rw-r--r-- 1 fabio fabio 0 dic  8 16:12 file_test2
$ chmod a+x file_test2    # aggiunge il permesso di esecuzione a tutti
$ ls -l file_test2
-rwxr-xr-x 1 fabio fabio 0 dic  8 16:12 file_test2

$ chmod go-wx file_test2  # toglie i permessi di scrittura ed esecuzione a gruppo e altri
$ ls -l file_test2
-rwxr--r-- 1 fabio fabio 0 dic  8 16:12 file_test2

$ chmod g+x file_test2    # aggiunge il permesso di esecuzione solo al gruppo
$ ls -l file_test2
-rwxr-xr-- 1 fabio fabio 0 dic  8 16:12 file_test2
```

<a href="/activities/1">Torna alla Parte I</a>
