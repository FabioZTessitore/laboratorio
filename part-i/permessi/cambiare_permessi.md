# Cambiare i permessi

![](../../images/people/tazza.png): Come faccio ad evitare che altri utenti possano
leggere il contenuto dei miei file?

![](../../images/people/tess.png): Deve cambiare i permessi, ovviamente!

## Cambiare i permessi con i numeri

![](../../images/people/tess.png): Ai vari permessi sono associati dei numeri:

`r` = 4

`w` = 2

`x` = 1

Ad es., se sono stati impostati i permessi `r--` il valore corrispondente sarà 4.
Invece `rw-` corrisponde a `4 + 2 = 6`.

Allo stesso modo `r-x` è equivalente a `4 + 1 = 5` e `rwx` a `4 + 2 + 1 = 7`.

![](../../images/people/tess.png): Il comando che permette di cambiare i permessi
è `chmod`:

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

## Cambiare i permessi con le lettere

![](../../images/people/tazza.png): Per me che sono pigro, non esiste un metodo
che non mi costringa a ricordare queste cose?

![](../../images/people/tess.png): In realtà non c'è molto da ricordare, quei numeri
sono solo le potenze di 2 e ogni gruppo di permessi può essere visto come un
numero di tre bit ...

In ogni caso i permessi possono essere aggiunti e tolti mediante i simboli `+` e `-`,
ad es. `+r` aggiunge il permesso di lettura, `-r` lo elimina.

Usando le lettere bisogna specificare a chi si vogliono aggiungere o togliere permessi:

`u` utente proprietario (user)

`g` gruppo (group)

`o` gli altri (others)

`a` tutti (all)

```
$ touch file_test2
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

![](../../images/people/tazza.png): Lo sapevo che c'era un altro modo!

Torna a [I permessi](../summary.md)
