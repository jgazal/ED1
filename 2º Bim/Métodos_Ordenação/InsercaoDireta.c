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
  int i, N;

  printf("Tamanho do vetor: ");
  scanf("%d", &N);
  int v[N];

  printf("Elementos do vetor: \n");
  for(i=0; i<N; i++)
  {
    scanf("%d", &v[i]);
  }

  insercaoDireta(N, v);

  printf("Vetor ordenado: ");
  for(i=0; i<N; i++)
  {
    printf("%d ", v[i]);
  }
  printf("\n");

  return 0;
}
