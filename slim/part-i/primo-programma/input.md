Input da tastiera


#### Input da tastiera

##### La funzione `raw_input()`

Per fare qualche programmino utile, anche se
ancora molto semplice, devi essere in grado di ottenere dei valori da tastiera.

```py
# Ottenere input dalla tastiera
print "Come ti chiami? "
name = raw_input()
print "Ciao", name
```

La prima riga è un commento.

La seconda non dovrebbe crearti problemi. &Egrave; la stampa della stringa `"Come ti chiami? "`

La terza riga è quella chiave. `raw_input()` è
una *funzione* messa a disposizione dal linguaggio Python. Quando l'interprete
la incontra ferma l'esecuzione del programma e si mette in attesa che l'utente
digiti qualcosa tramite tastiera. Tutto ciò che viene digitato
(una stringa) viene quindi etichettato con `name` (creazione della variabile)
e può quindi essere stampato con `print` (quarta riga).

> Esempio di output

```
Come ti chiami? Marco
Ciao, Marco
```

##### `raw_input()` e il prompt

Prima di chiedere input all'utente è sempre buona norma
stampare un messaggio per specificare cosa il programma si aspetta.

Tale messaggio si chiama anche *prompt* (come il prompt dei comandi, ricordi?).

Nell'esempio precedente il prompt era la stringa `"Come ti chiami? "`.

Siccome aggiungere un prompt è un'operazione comune,
la funzione `raw_input()` può anche essere invocata
come in questo altro esempio:

```py
name = raw_input("Come ti chiami? ")
print "Ciao", name
```

##### La funzione `input()`

La funzione `raw_input()` restituisce sempre
una stringa. Se devi chiedere un'informazione sotto forma di numero intero
allora puoi usare la funzione `input()`. Si può usare come `raw_input()`,
solo che resta in attesa di un valore intero invece che di una stringa.

<a href="/activities/1">Torna alla Parte I</a>
