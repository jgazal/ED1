/* 6- Considere que o vetor abaixo corresponde aos passos efetuados por um
algoritmo de ordenação aplicado ao vetor 7 9 8 3 5 2 5 (1ª linha do vetor).
Indique o algoritmo usado.

  7   9   8   3   5   2   5
  7   9   8   3   5   2   5
  7   8   9   3   5   2   5
  3   7   8   9   5   2   5
  3   5   7   8   9   2   5
  2   3   5   7   8   9   5
  2   3   5   5   7   8   9

a) BubbleSort simples
b) Quicksort
c) Seleção direta
***d) Inserção direta
e) BubbleSort melhorado   */

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
  int v[7] = {7, 9, 8, 3, 5, 2, 5};
  int i;

  insercaoDireta(7, v);

  for(i=0; i<7; i++)
  {
    printf("%d ", v[i]);
  }
  printf("\n");

  return 0;
}
