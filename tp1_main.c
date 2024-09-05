#include <stdio.h>
#include "tp1_exos.h"

int main(void)
{
  int n = 10;

  printf("La somme des entiers de 0 à %d est %d\n", n, sommeEntiers(n));
  printf("Le factoriel de %d est %d\n", n, factoriel(n));
  return 0;
}