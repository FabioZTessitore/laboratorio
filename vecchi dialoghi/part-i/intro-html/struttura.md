# La prima pagina Web

![](../../images/people/tess.png): Negli ultimi giorni ha imparato molte cose.
Potrebbe esserle venuta voglia di scrivere e pubblicare qualcosa sul Web.
Le va di creare qualche semplice pagina?

![](../../images/people/tazza.png): Se rispondo di sì, mi proporrà di scrivere sequenze lunghissime e incomprensibili?

![](../../images/people/tess.png): Non sarà necessario. Può iniziare creando un file
`index.html`:

> index.html

```html
Benvenuto nella mia Home Page

Qui puoi trovare tutte le informazioni che cerchi ...
```

![](../../images/people/tazza.png): E dove sono le sequenze incomprensibili?

![](../../images/people/tess.png): Nelle sue paure immagino. Qui abbiamo solo il testo
che vuole pubblicare.

Provi a creare il file e visualizzare la pagina con un browser.
Mi faccia sapere se trova differenze tra quello che ha scritto e quello che
viene visualizzato.

![](../../images/people/tazza.png): Se me lo chiede immagino che vedrò qualcosa di strano.
Vado a provare.

## I tag

![](../../images/people/tazza.png): Come volevasi dimostrare, il browser visualizza
il testo, ma non gli spazi e gli a capo.

![](../../images/people/tess.png): Esatto, le spiego cosa succede.

L'`HTML` è un linguaggio di *Markup*, che significa che il contenuto
delle pagine viene *etichettato* per ottenere *elementi*.

Un *elemento* è composto da un *tag di apertura*, dal contenuto, e da un *tag di chiusura*.

Per esempio per creare un paragrafo si usa il tag `p`. Il tag di apertura
sarà `<p>`, quello di chiusura `</p>`

```html
<p>Un paragrafo</p>
```

Può anche inserire commenti con `<!-- questo e' un commento -->`

Provi a modificare il file `index.html` in questo modo:

```html
<!-- la mia prima pagina Web -->

<p>Benvenuto nella mia Home Page</p>

<p>Qui puoi trovare tutte le informazioni che cerchi ...</p>
```

![](../../images/people/tazza.png): Molto bene, adesso il browser visualizza correttamente.

### Nidificare i tag

![](../../images/people/tess.png): I tag possono essere inclusi all'interno di altri tag
prestando attenzione a chiudere prima il tag interno e poi quello esterno.

Ad esempio, il tag `em` serve a mettere in evidenza una porzione di testo
e può naturalmente essere utilizzato all'interno di un paragrafo.

```html
<p>Il linguaggio HTML <em>non</em> sembra difficile.</p>
```

### Gli attributi

![](../../images/people/tess.png): Spesso i tag sono completati da *attributi*
che ne specificano il comportamento.

Gli attributi si inseriscono all'interno del tag di apertura
nella forma `attributo="valore"`

Per esempio l'attributo `name`, come può ben immaginare, permette di assegnare
un nome all'elemento.

```html
<p name="firma">A cura di ...</p>
```

## Una pagina completa

![](../../images/people/tess.png): Anche se è semplice iniziare a scrivere pagine Web,
per creare correttamente un file HTML bisogna aggiungere alcuni elementi.

La pagina deve essere racchiusa nel tag `<html>`.

```html
<html>
  <!-- pagina qui -->
</html>
```

All'interno di `<html>` troviamo la nostra pagina divisa in due parti principali:
`<head>` e `<body>`.

`<head>` contiene informazioni *riguardanti* il documento<br>
`<body>` contiene il documento stesso.

```html
<html>
  <head>
    <!-- informazioni sul documento -->
  </head>

  <body>
    <!-- documento -->
  </body>
</html>
```

Una cosa molto importante è iniziare con il `doctype`. Non è un tag, serve ad
indicare al browser la versione di HTML utilizzata. Per il Web moderno, utilizzando
l'HTML5, scriveremo:

```html
<!doctype html>   <!-- indica al browser che vogliamo usare HTML5 -->
```

Ecco la pagina completa:

```html
<!doctype html>

<!-- La pagina e' composta da un unico elemento html -->
<html lang="it">  <!-- l'attributo lang indica che scriveremo la pagina in italiano -->

  <!-- Ogni pagina e' formata da due sezioni: head e body

       In head trovano posto le informazioni riguardanti il documento.
       In body trova posto il documento stesso.
  -->

  <head>
    <!-- indica al browser il set di caratteri utilizzato -->
    <meta charset="utf-8">

    <!-- titolo del documento -->
    <title>La mia prima pagina completa</title>
  </head>


  <body>
    <p>Benvenuto nella mia Home Page</p>

    <p>Qui puoi trovare tutte le informazioni che cerchi ...</p>
  </body>

</html>
```

Torna a [Introduzione all'HTML](../summary.md)

Oppure [continua a leggere](tutorial.md)
