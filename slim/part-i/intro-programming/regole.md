Regole dei linguaggi di programmazione



#### Regole dei linguaggi di programmazione

Per programmare abbiamo bisogno di un linguaggio di programmazione.
Ma per cominciare vediamo quali sono le regole generali dei linguaggi.

Tutti i linguaggi sono composti da un alfabeto `a b c ... + - * / % { } [ ] ...`
(i simboli utilizzabili) e da regole su come combinare i vari elementi.

Le regole si dividono in:

1. Sintassi
2. Grammatica
3. Semantica

##### Sintassi

La sintassi di un linguaggio di programmazione
ci dice se una sequenza di caratteri e simboli è valida oppure no.
Ad es.:

```py
3 + 4    # OK
3 4 +    # NO!
```

##### Grammatica

Non tutte le sequenze, anche se corrette dal punto
di vista della sintassi, hanno senso. La grammatica ci dà proprio questa informazione.

```py
3 / 4     # OK
3 / 'abc' # NO! (pero' la sintassi e' corretta)
```

La sintassi della seconda istruzione è corretta perché c'è un valore,
il numero `3`, seguito dall'operatore `/`, seguito ancora da un altro valore,
la stringa `'abc'`. La sequenza `valore operatore valore` va bene,
ma chiaramente non ha senso dividere il numero `3` per la stringa `abc`.

##### Semantica

La semantica ci dice cosa significa quello che scriviamo.

Un programma potrebbe essere corretto dal punto di vista della sintassi
e della grammatica, ma fare qualcosa di diverso da quello che ci aspettavamo!

<a href="/activities/1">Torna alla Parte I</a>
