La libreria GASP



#### La libreria GASP

Finora abbiamo sempre utilizzato il terminale per l'input e l'output,
ma possiamo vedere qualche esempio diverso.

Per esempio, usando la libreria GASP, possiamo fare qualche disegnino.

> Assicurati di avere installato la libreria

```
$ sudo apt install python-gasp
```

Il primo passo è importare gli elementi della libreria:

```py
from gasp import *
```

A questo punto hai a disposizione le funzioni `begin_graphics()`
ed `end_graphics()` per creare e chiudere una finestra rispettivamente.

```py
from gasp import *

begin_graphics()

end_graphics()
```

Per evitare che la finestra si chiuda appena aperta abbiamo a disposizione
`update_when()`.

```py
from gasp import *

begin_graphics()

update_when('key_pressed') # aspetta un tasto

end_graphics()
```

##### Disegnare forme

Un bel risultato, ma serebbe meglio poter disegnare qualche forma.

Tieni presente che la finestra aperta ha dimensioni `640x480` pixel.
Inoltre il vertice in basso a sinistra è quello con coordinate `(0, 0)`.

```py
from gasp import *

begin_graphics()

# Line: traccia una linea
# accetta due tuple contenenti le coordinate
# del punto di partenza e di arrivo
Line((100, 100), (200, 200))

# Circle: traccia una circonferenza
# accetta una tupla con le coordinate
# del centro e il raggio
Circle((320, 240), 40)

# Box: traccia un rettangolo
# accetta una tupla con le coordinate
# del punto in basso a sinistra, larghezza e altezza
Box((400, 300), 100, 85)

update_when('key_pressed')

end_graphics()
```

Avrai notato che queste funzioni accettano le coordinate
dei punti sotto forma di tupla `(x, y)`.

<a href="/activities/2">Torna alla Parte II</a>
