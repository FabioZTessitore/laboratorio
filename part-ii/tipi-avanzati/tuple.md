# Le tuple

![](../../images/people/tess.png): Sig. Tazza, anche il linguaggio Python
è in grado di gestire tipi avanzati.

![](../../images/people/tazza.png): Come puntatori, stringhe, struct?

![](../../images/people/tess.png): Ehm ... no. Le stringhe in Python sono
considerate un tipo elementare.

Di puntatori neanche a parlarne.

Le struct non esistono.

![](../../images/people/tazza.png): E che rimane?

![](../../images/people/tess.png): Per esempio le *tuple*.

Una tupla è una sequenza di valori intervallati dalla virgola. Una cosa del
tipo: `"ciao", "buongiorno", "buonanotte"`.

Normalmente si usano anche le parentesi tonde:

```py
una_tupla = ("ciao", "buongiorno", "buonanotte")
```

![](../../images/people/tazza.png): C'è una vaga somiglianza con i vettori.

![](../../images/people/tess.png): In effetti è una sequenza di valori,
ma la somiglianza finisce qui. Innanzitutto una volta creata una tupla
non può essere modificata (si dice che è *immutabile*).

Inoltre una tupla può contenere valori di tipo diverso anche contemporaneamente:

```py
t = (1, 5.8, "hello")
```

![](../../images/people/tazza.png): Al momento non sembra interessante.

![](../../images/people/tess.png): Non dica così. In seguito le saranno molto
di aiuto. Ci pensi su, sta trattando tanti valori con un solo nome.

Un altro paio di cose.

Se deve creare una tupla con un solo elemento ricordi di mettere la virgola:

```py
t = ('hello',)
```

Inoltre, devo dirle come fare per recuperare i valori presenti in una tupla.

Può usare gli indici come con i vettori:

```py
t = ('hello', 'bye')
saluto1 = t[0]
saluto2 = t[1]
```

Ma può anche fare un'assegnazione multipla:

```py
t = ('hello', 'bye')
saluto1, saluto2 = t
```

Torna a [I tipi avanzati del Python](../summary.md)
