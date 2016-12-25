# Una semplice collaborazione

![](../../images/people/tess.png): Quando ha creato la repository, forse mi ha aggiunto
come collaboratore, il che significa che posso effettuare modifiche ai file
esattamente come lei.

Per questa ragione può accadere che i file che ha sul computer non siano aggiornati.

In altre parole, prima di iniziare a fare modifiche ai file ricordi di
scaricare la versione aggiornata con:

```
$ git pull origin
```

Quindi lo schema di lavoro diventa:

<table>
<tr>
  <td>1</td> <td>pull</td> <td>`$ git pull origin`</td>
</tr>
<tr>
  <td>2</td> <td></td> <td>modifica dei file</td>
</tr>
<tr>
  <td>3</td> <td>stage dei file</td> <td>`$ git add lista_dei_file_modificati`</td>
</tr>
<tr>
  <td>4</td> <td>commit</td> <td>`$ git commit -m "descrizione modifica"`</td>
</tr>
<tr>
  <td>5</td> <td>push</td> <td>`$ git push origin master`</td>
</tr>
</table>

Torna a [Git e GitHub](../summary.md)
