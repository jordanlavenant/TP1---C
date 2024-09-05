# TP1 - C

## Renommer un éxécutable

`gcc <name> -o <name>`

> Compilez les deux fichiers avec la syntaxe suivante :  
> `$ gcc main.c bonjour.c -o bonjour`  
> Une erreur doit normalement apparaitre. . . Que se passe-t-il selon vous?

La méthode `bonjour()` n'est pas référencé dans le fichier main.c.

## Importer des fichiers dans d'autres fichiers

Il faut déclarer la fonction à exporter dans un fichier ayant le même nom que le fichier contenant cette méthode avec l'extension `.h`, en déclarant un prototype :

```c
void bonjour();
```

Il faut ensuite inclure cette méthode dans le fichier source et les fichiers destinataires :

```c
#include "bonjour.h"
```

Nous pouvons ensuite utiliser nos méthodes dans les fichiers.

## Recompilation

Pour recompiler individuellement nos fichiers, nous pouvons compiler leurs objets `<name>.o` en les créeant :

`gcc -c <name>.c`

Cela créer des fichiers objects que l'on peut compiler ensuite :

`gcc <name>.o -o <name>`

## Options de compilations

`gcc -std=c11 -Wall -Wextra -O0 bonjour.c main.c -o bonjour`
