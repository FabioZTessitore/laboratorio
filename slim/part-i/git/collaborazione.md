Una semplice collaborazione



#### Una semplice collaborazione

Quando hai creato la repository, forse mi hai aggiunto
come collaboratore, il che significa che posso effettuare modifiche ai file
esattamente come te.

Per questa ragione può accadere che i file che hai sul computer non siano aggiornati.

In altre parole, prima di iniziare a fare modifiche ricorda di
scaricare la versione aggiornata con:

```
$ git pull origin
```

Quindi lo schema di lavoro diventa:

<table>
<tr>
  <td>1</td> <td>pull</td> <td>$ git pull origin</td>
</tr>
<tr>
  <td>2</td> <td></td> <td>modifica dei file</td>
</tr>
<tr>
  <td>3</td> <td>stage dei file</td> <td>$ git add lista_dei_file_modificati</td>
</tr>
<tr>
  <td>4</td> <td>commit</td> <td>$ git commit -m "descrizione modifica"</td>
</tr>
<tr>
  <td>5</td> <td>push</td> <td>$ git push origin master</td>
</tr>
</table>

<a href="/activities/1">Torna alla Parte I</a>
