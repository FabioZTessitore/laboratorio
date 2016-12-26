# Regole dei linguaggi di programmazione

![](../../images/people/tess.png): Caro Sig. Tazza, ci siamo quasi. Stiamo per iniziare
a programmare.

![](../../images/people/tazza.png): Quale linguaggio di programmazione preferisce?

![](../../images/people/tess.png): Vedo che già sa che per programmare abbiamo bisogno
di un linguaggio di programmazione. Ma per cominciare vediamo quali sono le regole generali dei linguaggi.

Tutti i linguaggi sono composti da un alfabeto `a b c ... + - * / % { } [ ] ...`,
in altre parole i simboli utilizzabili, e da regole su come combinare i vari elementi.

Le regole si dividono in:

1. Sintassi
2. Semantica statica
3. Semantica

## Sintassi

![](../../images/people/tess.png): Sa cos'è la sintassi?

![](../../images/people/tazza.png): "è la branca della linguistica che studia
i diversi modi in cui le parole si uniscono tra loro per formare una proposizione"

![](../../images/people/tess.png): Si, anche io uso wikipedia ...

Per i nostri scopi le basti sapere che la sintassi di un linguaggio di programmazione
ci dice se una sequenza di caratteri e simboli è valida oppure no.
Ad es.:

```py
3 + 4    # OK
3 4 +    # NO!
```

## Semantica statica

![](../../images/people/tess.png): Non tutte le sequenze, anche se corrette dal punto
di vista della sintassi, hanno senso. La semantica statica ci dà proprio questa informazione.

![](../../images/people/tazza.png): Un esempio?

![](../../images/people/tess.png):

```py
3 / 4     # OK
3 / 'abc' # NO! (pero' la sintassi e' corretta)
```

![](../../images/people/tazza.png): Perché è corretta la sintassi della seconda istruzione?

![](../../images/people/tess.png): Perché c'è un valore, il numero `3`, seguito dall'operatore `/`,
seguito ancora da un altro valore, la stringa `'abc'`.
La sequenza `valore operatore valore` va bene, ma chiaramente non ha senso
dividere il numero `3` per la stringa `abc`.

## Semantica

![](../../images/people/tazza.png): E la semantica?

![](../../images/people/tess.png): La semantica in senso stretto ci dice cosa significa
quello che scriviamo.

![](../../images/people/tazza.png): Sembra una cosa ovvia ... se scriviamo qualcosa
è perché vogliamo dire quello che scriviamo.

![](../../images/people/tess.png): Ne è proprio sicuro? Un programma potrebbe essere
corretto dal punto di vista della sintassi e della semantica statica,
ma fare qualcosa di diverso da quello che ci aspettavamo!

Torna a [Introduzione alla programmazione](../summary.md)
