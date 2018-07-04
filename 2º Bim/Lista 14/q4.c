/* 4- No vetor apresentado a seguir, os dois primeiros elementos já foram classi-
ficados usando a ordenação por inserção direta. Qual será o valor dos outros
elementos no vetor, depois de realizar mais 3 passagens do algoritmo de inserção
direta?

  v[0]  v[1]  v[2]  v[3]  v[4]  v[5]  v[6]  v[7]
    4    14     8    27    45    24    99    58

1:  4     8    14    27    45    24    99    58
2:  4     8    14    27    45    24    99    58
3:  4     8    14    27    45    24    99    58 */

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
  int v[8] = {4, 14, 8, 27, 45, 24, 99, 58};
  int i;

  insercaoDireta(8, v);

  for(i=0; i<8; i++)
  {
    printf("%d ", v[i]);
  }
  printf("\n");

  return 0;
}
