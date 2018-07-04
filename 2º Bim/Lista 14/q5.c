/* 5- Ordene o vetor v = 19, 12, 25, 2, 8, 16 usando o método de Inserção Direta.
Mostre o vetor a cada passo do loop.

    v[0]  v[1]  v[2]  v[3]  v[4]  v[5]
1:   19    12    25     2     8    16

2:   12    19    25     2     8    16
3:   12    19    25     2     8    16
4:    2    12    19    25     8    16
5:    2     8    12    19    15    16
6:    2     8    12    16    19    25  */

#include<stdio.h>

void insercaoDireta(int	n, int* v)
{
  int	i, j, aux;

  for(i=1; i<n; i++)
  {
    aux	=	v[i];
    for(j=i-1; j>=0	&& aux<v[j]; j--)
    {
      v[j+1] = v[j];
    }
    v[j+1] = aux;
	}
}

int main()
{
  int v[6] = {19, 12, 25, 2, 8, 16};
  int i;

  insercaoDireta(6, v);

  for(i=0; i<6; i++)
  {
    printf("%d ", v[i]);
  }
  printf("\n");

  return 0;
}
