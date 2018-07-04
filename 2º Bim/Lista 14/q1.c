/* 1- Dado o vetor v = (5, 2, 8, 1, 3, 2), demonstre cada passagem para sua or-
denação utilizando o método da bolha simples.

          0   1   2   3   4   5
    V =   5   2   8   1   3   2

Pass.1:   2   5   1   3   2   8
Pass.2:   2   1   3   2   5   8
Pass.3:   1   2   2   3   5   8
Pass.4:   1   2   2   3   5   8
Pass.5:   1   2   2   3   5   8   */

#include<stdio.h>

void bubblesort(int n, int v[])
{
  int aux, j, pass;

  for(pass = 0; pass<n-1; pass++)
  {
    for(j=0; j<n-pass-1; j++)
    {
      if(v[j] > v[j+1]) {
        aux = v[j];
        v[j] = v[j+1];
        v[j+1] = aux;
      }
    }
  }
}

int main()
{
  int v[6] = {5, 2, 8, 1, 3, 2};
  int i;

  bubblesort(6, v);

  for(i=0; i<6; i++)
  {
    printf("%d ", v[i]);
  }
  printf("\n");

  return 0;
}
