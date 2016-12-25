# Gli argomenti dei comandi

![](../../images/people/tess.png): Sig. Tazza, bentornato!

![](../../images/people/tazza.png): Grazie, Sig. Tessitore. Ho fatto molte prove con i comandi della shell di Linux e le loro opzioni.

![](../../images/people/tess.png): Bene, bene. Allora è pronto per passare al prossimo argomento.

Molti comandi accettano anche *argomenti*. Un argomento è un'informazione extra come, ad esempio, il nome di un file su cui il comando stesso dovrà agire.
Ecco subito un esempio:

> Mostra il contenuto del file `/etc/passwd`.

```
$ cat /etc/passwd
```

Vediamo un altro esempio. In questo caso è l'opzione `-n` del comando `tail` che necessita di un argomento.

> Mostra solo le ultime due righe di `/etc/passwd`

```
$ tail -n 2 /etc/passwd
```

Nell'esempio appena fatto gli argomenti sono due: il numero `2` è argomento dell'opzione `-n`, il file `/etc/passwd` è argomento del comando `tail`.

![](../../images/people/tazza.png): Anche le opzioni con nomi lunghi possono accettare argomenti?

![](../../images/people/tess.png): Certo. Però cambia la sintassi. Spesso in questi casi l'argomento segue il segno `=`.

> Mostra la lista degli oggetti nella directory corrente, ma nasconde `Documenti`.

```
$ ls --hide=Documenti
```

Torna a [Il prompt dei comandi](../summary.md)
