# Clonare una repository

![](../../images/people/tazza.png): Mi ha parlato di `GitHub` e di `git` ma non
ho capito qual è la correlazione tra i due ...

![](../../images/people/tess.png): Ricorda la repository che ha creato su `GitHub`?

![](../../images/people/tazza.png): Veramente non ho provato, mi sembrava chiaro
e non l'ho fatto ...

![](../../images/people/tess.png): Al solito. Bisogna sempre provare! La crei adesso,
una bella repository chiamata "test".

Finito?

Bene, come prima cosa dobbiamo imparare a clonarla sul computer, in modo
da poter effettuare modifiche.

```
$ cd
$ git clone https://github.com/USERNAME/test.git  # si puo' copiare e incollare dal sito
```

Se ha eseguito correttamente le operazioni, ora nella sua home c'è una directory
`test`, copia della repository che ha creato su `GitHub`.

```
$ cd test
$ ls
README.md   # se ha messo quella spunta ...
```

Torna a [Git e GitHub](../summary.md)

Oppure [continua a leggere](commit_push.md)
