# La libreria GASP

![](../../images/people/tazza.png): Sig. Tessitore, tutti i programmi che abbiamo visto finora
utilizzavano il terminale per l'input e l'output.
Non si potrebbe vedere qualche esempio diverso?

![](../../images/people/tess.png): Sig. Tazza, ormai ha acquisito abbastanza conoscenze
per poter fare qualcosa di diverso. Le piace disegnare?

![](../../images/people/tazza.png): Non saprei, proviamo.

![](../../images/people/tess.png): Le farò vedere come scrivere un programmino in Python
che fa uso della libreria GASP. Deve assicurarsi di averla installata.

```
$ sudo apt-get install python-gasp
```

![](../../images/people/tess.png): Innanzitutto bisogna importare gli elementi della libreria:

```py
from gasp import *
```

A questo punto ha a disposizione le funzioni `begin_graphics()`
ed `end_graphics` per creare e chiudere una finestra.

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

![](../../images/people/tess.png): Provi, provi, apra una finestra!

![](../../images/people/tazza.png): Non ci posso credere. ...

![](../../images/people/tess.png): Un bel risultato, ma serebbe meglio poter disegnare qualche forma:

Tenga presente che la finestra aperta ha dimensioni `640x480` pixel.
Inoltre il vertice in basso a sinistra è quello con coordinate `(0, 0)`.

```py
from gasp import *

begin_graphics()

# Line: traccia una linea
# accetta due tuple contenenti le coordinate del punto di partenza e di arrivo
Line((100, 100), (200, 200))

# Circle: traccia una circonferenza
# accetta una tupla con le coordinate del centro e il raggio
Circle((320, 240), 40)

# Box: traccia un rettangolo
# accetta una tupla con le coordinate del punto in basso a sinistra, larghezza e altezza
Box((400, 300), 100, 85)

update_when('key_pressed')
end_graphics()
```

![](../../images/people/tazza.png): Ci sono le tuple!

![](../../images/people/tess.png): Eh si. Queste funzioni accettano le coordinate
dei punti sotto forma di tupla `(x, y)`.

Torna a [Non solo terminale](part-ii/summary.md)
