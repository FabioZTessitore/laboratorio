# Il cast

![](../../images/people/tazza.png): Parliamo di cinema?

![](../../images/people/tess.png): Ma cosa ha capito? Fare un *cast* significa
effettuare una trasformazione di tipo. Per esempio far diventare `double`
un valore che inizialmente era `int`.

Tra l'altro dovrebbe saperlo perché l'ha già fatto con il linguaggio
Python.

![](../../images/people/tazza.png): Ma certo, scherzavo. Le faccio vedere:

```py
x_int = 3
x_float = float(x_int)  # in Python i valori in virgola mobile sono float
```

![](../../images/people/tess.png): Molto molto bene, Sig. Tazza.

Se invece del linguaggio Python usa il linguaggio C cambia leggermente la sintassi:

```c
int x_int = 3;
double x_double = (double)x_int;  /* noti le parentesi */
```

Torna a [I tipi avanzati del C](../summary.md)

Oppure [continua a leggere](pointer.md)
