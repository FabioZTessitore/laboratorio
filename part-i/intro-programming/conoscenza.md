# Conoscenza

![](../../images/people/tazza.png): Sig. Tessitore, ora abbiamo anche strumenti
per collaborare, ma quando iniziamo a programmare?

![](../../images/people/tess.png): Calma, calma ... parliamo prima di conoscenza.

![](../../images/people/tazza.png): Conoscenza di chi?

![](../../images/people/tess.png): Non di qualcuno ...

La conoscenza si divide in due grosse categorie:

1. Dichiarativa
2. Imperativa

## La conoscenza dichiarativa

![](../../images/people/tess.png): Lei studia matematica?

![](../../images/people/tazza.png): Si.

![](../../images/people/tess.png): Allora conoscerà questa definizione:

> `y` è la radice di `x` se `y * y = x`

![](../../images/people/tazza.png): Dovrei?

![](../../images/people/tess.png): Dovrebbe ...

Se, ad esempio, `x` vale 25 e `y` vale 5, sappiamo che `y` è radice di `x`
perché `5 * 5 = 25`

![](../../images/people/tazza.png): Adesso perché vuole confondermi con questa matematica?

![](../../images/people/tess.png): Vorrei farle notare che questo tipo di conoscenza
è utile per fare dei controlli, ma non ci aiuta a trovare la soluzione al problema.
Se non conosco la radice di un numero, come faccio a trovarla?

# La conoscenza imperativa

![](../../images/people/tess.png): Prenda carta e penna e provi a fare queste operazioni:

1. scelga un numero `g` a caso (diverso da 0)
2. calcoli `g*g` e se il risultato non è "abbastanza vicino" a `x` vada al prossimo punto
3. calcoli `g = (g + x/g) / 2`
4. torni al punto 2

![](../../images/people/tess.png): Finito?

Quello che abbiamo scritto, e che lei ha sicuramente eseguito, è un *algoritmo*
per il calcolo della radice quadrata di un numero.

Approfittando del fatto che i computer sono molto bravi a fare calcoli velocemente,
possiamo usare gli algoritmi per avere risposte alle nostre domande.

Per finire le faccio notare alcune caratteristiche che devono avere gli algoritmi:

* devono convergere (arrivare ad un risultato);
* sono composti da istruzioni;
* e da controlli sul flusso delle istruzioni ("se ... allora ...");
* hanno una condizione di terminazione ("se abbastanza vicino").

![](../../images/people/tess.png): Mi raccomando, faccia molta attenzione quando
scrive algoritmi, o codice in generale. Il bello, e il brutto, della programmazione
è che un computer fa *esattamente* quello che gli viene chiesto di fare!

Torna a [Introduzione alla programmazione](../summary.md)

Oppure [continua a leggere](soluzione_radice_quadrata.md)
