/* 3 - Faça a ordenação do vetor abaixo rastreando a função quicksort, mostre
passo a passo como a ordenação é feita.

  esq                       dir
    0   1   2   3   4   5   6
   [7   5   4   2   6   3   4]  */

#include<stdio.h>

void quicksort(int v[], int esq, int dir)
{
  int salva;
  int i = esq;
  int j = dir;
  int p = v[(i+j)/2]; //pivô -> v[2] = 4

  do {
    while(v[i] < p) {
      i++;
    }
    while(p < v[j]) {
      j--;
    }
    if(i <= j) {
      salva = v[i];
      v[i] = v[j];
      v[j] = salva;
      i++;
      j--;
    }
  } while(i <= j);
  if(esq < j) {
    quicksort(v, esq, j);
  }
  if(i < dir) {
    quicksort(v, i, dir);
  }
}

int main()
{
  int v[7] = {7, 5, 4, 2, 6, 3, 4};
  int i;

  quicksort(v, 0, 6); //v[0] = esq , v[6] = dir

  for(i=0; i<7; i++)
  {
    printf("%d ", v[i]);
  }
  printf("\n");

  return 0;
}
