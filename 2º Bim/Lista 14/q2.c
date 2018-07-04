/* 2- No vetor apresentado a seguir, já foram executadas duas passagens de orde-
nação pelo método bolha. Como ficará o vetor depois de realizar mais três
passagens do algoritmo deste mesmo método?

    V =   8   9   27   45   14   24   58    99

Pass.3:   8   9   27   14   24   45   58    99
Pass.4:   8   9   14   24   27   45   58    99
Pass.5:   8   9   14   24   27   45   58    99  */

#include<stdio.h>

void bubblesort(int n, int v[])
{
  int i, j, aux;

  for(i=0; i<n-1; i++)
  {
    for(j=0; j<n-i-1; j++)
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
  int v[8] = {8, 9, 27, 45, 14, 24, 58, 99};
  int i;

  bubblesort(8, v);

  for(i=0; i<8; i++)
  {
    printf("%d ", v[i]);
  }
  printf("\n");

  return 0;
}
