I fogli di stile


#### I fogli di stile

Mentre l'`HTML` è un linguaggio di Markup che permette
di strutturare un documento specificandone gli elementi,
i *fogli di stile* (**CSS**, Cascading Style Sheet) permettono
di modificare l'aspetto esteriore della pagina e dei suoi componenti.

##### L'attributo `style`

Per iniziare prepara una pagina web con alcuni elementi come
intestazioni e paragrafi.

```html
<h1>My Web Site</h1>

<p>A cura di ...</p>
```

L'attributo `style` permette di modificare le proprietà dell'elemento
a cui è applicato. Ad esempio, per cambiare il colore del testo dell'intestazione:

```html
<h1 style="color: red;">My Web Site</h1>
```

Questo metodo va bene per fare qualche piccola modifica di prova
ma non dovrebbe essere utilizzato in generale perché così facendo non si
tengono separate la struttura e il significato del documento (l'HTML)
e la sua presentazione (CSS).

##### Il tag style

Per risolvere, almeno parzialmente, il problema della separazione
tra HTML e CSS possiamo usare il tag `<style>` all'interno di `<head>`.

```html
<!doctype html>

<html>
  <head>
    <meta charset="utf-8">
    <title>My Web Site</title>

    <style>
    /* regole di visualizzazione */

    /* tutti gli h1 saranno rossi */
    h1 {
      color: red;
    }

    /* i paragrafi blu */
    p {
      color: blue;
    }
    </style>
  </head>

  <body>
    <h1>My Web Site</h1>

    <p>A cura di ...</p>
  </body>
</html>
```

##### Fogli di stile esterni

La soluzione definitiva per utilizzare i fogli di stile è quella di
includerli all'interno delle pagine HTML mediante il tag `<link>`.

In questo modo, non solo riusciamo a separare HTML e CSS,
ma possiamo utilizzare lo stesso foglio di stile su più
pagine web.

```html
<head>
  ...
  <link rel="stylesheet" href="style.css">
</head>
```

> Il foglio di stile esterno style.css

```css
h1 {
  color: red;
}
```

<a href="/activities/2">Torna alla Parte II</a>
