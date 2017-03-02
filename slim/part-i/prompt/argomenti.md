Gli argomenti dei comandi



#### Gli argomenti dei comandi

Molti comandi accettano anche *argomenti*.

Un argomento è un'informazione extra come, ad esempio, il nome di un file
su cui il comando stesso dovrà agire. Ecco un esempio:

> Mostra il contenuto del file `/etc/passwd`.

```
$ cat /etc/passwd
```

Un altro esempio. In questo caso è l'opzione `-n` del comando `tail` che necessita di un argomento.

> Mostra solo le ultime due righe di `/etc/passwd`

```
$ tail -n 2 /etc/passwd
```

Nell'esempio appena fatto gli argomenti sono due: il numero `2` è argomento dell'opzione `-n`, il file `/etc/passwd` è argomento del comando `tail`.

Anche le opzioni con nomi lunghi possono accettare argomenti, però cambia la sintassi.
Spesso in questi casi l'argomento segue il segno `=`.

> Mostra la lista degli oggetti nella directory corrente, ma nasconde `Documenti`.

```
$ ls --hide=Documenti
```

<a href="/activities/1">Torna alla Parte I</a>
