Enum

#### Enum

A volte abbiamo bisogno di una variabile che possa assumere solo certi valori
come nel caso di `stato` che può essere solo `NORM`, `A` oppure `B`.

In questi casi possiamo utilizzare la parola chiave `enum` per definire
una lista di possibili valori:

```c
enum STATO { NORM, A, B };
```

La variabile `stato` può essere dichiarata di tipo `int` oppure di tipo
`enum STATO`:

```c
enum STATO stato = NORM;
```

<a href="/activities/2">Torna alla Parte II</a>
