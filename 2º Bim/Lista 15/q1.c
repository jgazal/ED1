/* 1 - Uma das operações básicas do algoritmo quicksort é a partição. Após aplicado
a partição, num dado passo do algoritmo, obteve-se a seguinte sequência:

[2 1 0 3 1 4 8 6 5 7]

Indique a posição atual (índice) do elemento que foi usado para fazer a partição
(pivô) e quais são as chamadas recursivas que serão realizadas.

R = 4 */

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
  int v[10] = {2, 1, 0, 3, 1, 4, 8, 6, 5, 7};
  int i;

  quicksort(v, 0, 9); //v[0] = esq , v[6] = dir

  for(i=0; i<10; i++)
  {
    printf("%d ", v[i]);
  }
  printf("\n");

  return 0;
}
