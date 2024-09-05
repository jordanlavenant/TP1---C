#include <stdio.h>
#include "tp1_exos.h"

int sommeEntiers(int n)
{
  int somme = 0;
  for (int i = 0; i < n + 1; i++)
  {
    somme += i;
  }
  return somme;
}

int factoriel(int n)
{
  int res = 1;
  for (int i = 1; i <= n; i++)
  {
    res *= i;
  }
  return res;
}