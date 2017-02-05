# Input da tastiera

## La funzione `raw_input()`

![](../../images/people/tess.png): Per fare qualche programmino utile, anche se
ancora molto semplice, dobbiamo essere in grado di ottenere dei valori da tastiera.

{% highlight python linenos %}
# Ottenere input dalla tastiera
print "Come ti chiami? "
name = raw_input()
print "Ciao", name
{% endhighlight %}

![](../../images/people/tazza.png): Parliamone.

![](../../images/people/tess.png): Saltiamo la prima riga che è un commento, la seconda
non dovrebbe crearle problemi. &Egrave; la stampa della stringa `"Come ti chiami? "`

![](../../images/people/tazza.png): Ok

![](../../images/people/tess.png): La terza riga è quella chiave. `raw_input()` è
una *funzione* messa a disposizione dal linguaggio Python. Quando l'interprete
la incontra ferma l'esecuzione del programma e si mette in attesa che l'utente
digiti qualcosa tramite tastiera. Tutto ciò che viene digitato
(una stringa) viene quindi etichettato con `name` (creazione della variabile)
e può quindi essere stampato con `print` (quarta riga).

![](../../images/people/tazza.png): Provo ad eseguirlo:

```
Come ti chiami? Marco
Ciao, Marco
```

![](../../images/people/tess.png): Lei non si chiama Marco!

![](../../images/people/tazza.png): Non volevo dare il mio nome a questo programma sconosciuto ...

![](../../images/people/tess.png): Non è sconosciuto, ha visto anche il codice!

### `raw_input()` e il prompt

![](../../images/people/tess.png): Una semplificazione:

Prima di chiedere input all'utente è sempre buona norma
stampare un messaggio per specificare cosa il programma si aspetta.

Tale messaggio si chiama anche prompt (come il prompt dei comandi, ricorda?).

Nell'esempio precedente il prompt era la stringa `"Come ti chiami? "`

Siccome aggiungere un prompt è un'operazione comune,
la funzione `raw_input()` può anche essere invocata
come in questo altro esempio:

```py
name = raw_input("Come ti chiami? ")
print "Ciao", name
```

## La funzione `input()`

![](../../images/people/tazza.png): La funzione `raw_input()` restituisce sempre
una stringa. E se devo chiedere un'informazione sotto forma di numero?

![](../../images/people/tess.png): Se quello che le serve è un intero allora
può usare la funzione `input()`. La può usare come `raw_input()`, solo che
resta in attesa di un valore intero invece che di una stringa.

Per altri tipi deve effettuare una conversione come ha già visto in precedenza.

Torna a [Il primo programma](../summary.md)

Oppure [continua a leggere](esercizi.md)
