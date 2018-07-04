/* 2 - Considere a execução do algoritmo Quicksort com o vetor
[ 2 10 1 8 20 5 14 13 9 ].
Quantas partições serão feitas para ordenar esse vetor? Quais são as partições
(sub-vetores) e o pivô resultantes de cada uma dessas chamadas? */

#include<stdio.h>

void quicksort(int v[], int esq, int dir)
{
  int salva;
  int i = esq;
  int j = dir;
  int p = v[(i+j)/2];

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
  int v[9] = {2, 10, 1, 8, 20, 5, 14, 13, 9};
  int i;

  quicksort(v, 0, 8); //v[0] = esq , v[6] = dir

  for(i=0; i<9; i++)
  {
    printf("%d ", v[i]);
  }
  printf("\n");

  return 0;
}
