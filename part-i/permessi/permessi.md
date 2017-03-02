# I permessi

![](../../images/people/tazza.png): Sig. Tessitore, non crede sia il momento di
svelare il mistero di quei caratteri che vengono stampati quado si esegue
il comando `ls -l`?

![](../../images/people/tess.png): Intende questi qui?

```
$ ls -l
totale 68
-rw-r--r-- 1 fabio fabio 1272 gen 12  2016 404.html
-rw-r--r-- 1 fabio fabio 3959 gen 12  2016 apple-touch-icon.png
-rw-r--r-- 1 fabio fabio  417 gen 12  2016 browserconfig.xml
-rw-r--r-- 1 fabio fabio  611 gen 12  2016 crossdomain.xml
drwxr-xr-x 2 fabio fabio 4096 nov 26 18:35 css
drwx------ 2 fabio fabio 4096 nov 26 18:35 doc
-rw-r--r-- 1 fabio fabio  766 gen 12  2016 favicon.ico
-rw-r--r-- 1 fabio fabio  229 gen 12  2016 humans.txt
drwx------ 2 fabio fabio 4096 nov 26 18:35 img
-rw-r--r-- 1 fabio fabio 2502 nov 27 16:23 index.html
drwxr-xr-x 3 fabio fabio 4096 nov 26 18:35 js
-rw-r--r-- 1 fabio fabio 1056 gen 12  2016 LICENSE.txt
-rw-r--r-- 1 fabio fabio  564 nov 26 19:16 listaeventi.php
-rw-r--r-- 1 fabio fabio   22 nov 26 19:23 README.md
-rw-r--r-- 1 fabio fabio   78 gen 12  2016 robots.txt
-rw-r--r-- 1 fabio fabio 3482 gen 12  2016 tile.png
-rw-r--r-- 1 fabio fabio 1854 gen 12  2016 tile-wide.png
```

![](../../images/people/tazza.png): Si si, quelli sulla sinistra.

![](../../images/people/tess.png): Quelli sono i permessi ed indicano quali operazioni
possono effettuare gli utenti del sistema con quei particolari file o directory.

La prima cosa da sapere è che per utilizzare un sistema Linux bisogna creare un
utente. Le ricordo che il nome utente viene generalmente stampato all'interno del prompt.

Gli utenti possono appartenere a *gruppi*. In molti sistemi, quando si crea un
utente, si crea anche un gruppo con lo stesso nome, e si inserisce l'utente in
quel gruppo.

![](../../images/people/tazza.png): Può essere più preciso?

![](../../images/people/tess.png): Ricorda l'utente `fabio`? Alla creazione dell'utente
`fabio` è stato creato anche un gruppo `fabio` e l'utente `fabio` appartiene al
gruppo `fabio`.

Nella figura di prima la seconda e la terza colonna riportano il nome `fabio`.
La prima volta è il nome del proprietario del file, la seconda volta è il nome
del gruppo proprietario del file.

![](../../images/people/tazza.png): Non capisco il senso di questa cosa.

![](../../images/people/tess.png): Per capirne il senso bisogna parlare dei permessi.

I permessi vengono divisi in tre gruppi. Il primo gruppo
si riferisce ai permessi dell'utente proprietario del file. Il secondo si riferisce
ai permessi del gruppo proprietario, ed infine il terzo si riferisce a tutti gli altri
utenti di sistema.

Consideri ad esempio il file `robots.txt`:

```
$ ls -l robots.txt
-rw-r--r-- 1 fabio fabio 78 gen 12  2016 robots.txt
```

Il primo carattere `-` indica che si tratta di un file regolare (non una directory
o altro).

Poi trova altri nove caratteri: `rw-r--r--`, che vanno interpretati a tre a tre.

I primi tre `rw-` sono i permessi del proprietario del file, cioè `fabio`.
I secondi tre `r--` sono i permessi del gruppo proprietario del file (gruppo `fabio`).
Gli ultimi tre `r--` sono i permessi degli altri utenti (non il proprietario e non
quelli che appartengono al gruppo proprietario).

![](../../images/people/tazza.png): E cosa significano?

![](../../images/people/tess.png): Il proprietario `fabio` può leggere il contenuto
del file (lo può aprire), perché c'è la `r` (read). Inoltre può scrivere nel
file (salvare delle modifiche) perché c'è la `w` (write).

Il terzo carattere è un segno `-` che significa *assenza* del corrispondente permesso.
In questo caso il permesso mancante è quello di esecuzione `x` (semplificando,
il file non può essere lanciato come un comando).

![](../../images/people/tazza.png): Ok.

![](../../images/people/tess.png): Il secondo gruppo di permessi `r--` si riferisce
al gruppo proprietario (più precisamente agli utenti appartenenti al gruppo).
&Egrave; presente solo il permesso di lettura, mancano invece quello di scrittura e
quello di esecuzione.

![](../../images/people/tazza.png): Quindi se un altro utente, diciamo `claudio`,
appartiene al gruppo `fabio`, può solo leggere il contenuto di `robots.txt` ma
non effettuare delle modifiche.

![](../../images/people/tess.png): Esattamente.

Inoltre anche tutti gli altri utenti del sistema potranno leggere il contenuto del
file perché anche nel gruppo degli altri (ultimi tre caratteri)
c'è il permesso di lettura `r--`

## Permessi e directory

![](../../images/people/tazza.png): Nell'immagine in alto ci sono anche delle directory,
come ad esempio, `css`:

```
$ ls -l css
drwxr-xr-x 2 fabio fabio 4096 nov 26 18:35 css
```

![](../../images/people/tess.png): Innanzitutto, come può vedere, il primo carattere
è una `d` che indica che si tratta di una directory e non di un file.

Riguardo ai permessi lo schema non cambia, ci sono sempre tre gruppi da tre
caratteri relativi a proprietario, gruppo proprietario e altri.

Quello che cambia è il significato dei simboli.

`r`, permesso di lettura, indica la possibilità di leggere la lista dei file contenuti;

`w`, permesso di scrittura, indica la possibilità di aggiungere, cancellare o modificare file (ad esempio cambiarne il nome);

`x`, permesso di accedere e attraversare la directory;

![](../../images/people/tazza.png): Quindi nel caso dell'esempio, l'utente `fabio` può
fare tutto, leggere il contenuto della directory, modificarlo (creando file ecc.),
ed accedere ad essa. Ma che significa attraversarla?

![](../../images/people/tess.png): Immagini che nella directory `css` sia presente un'altra
directory, chiamiamola `base`. Lei potrebbe voler effettuare l'operazione `cd css/base`
per *attraversare* `css` in modo da poter accedere a `base`.

![](../../images/people/tazza.png): *&lt;meraviglia&gt;Fantastico&lt;/meraviglia&gt;*

Torna a [I permessi](../summary.md)

Oppure [continua a leggere](cambiare_permessi.md)
