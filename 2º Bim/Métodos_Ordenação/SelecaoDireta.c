#include<stdio.h>

void selecaoDireta(int n, int* v)
{
  int i, j, min, x;

  for(i=0; i<n-1; i++)
  {
    min = i;
    for(j=i+1; j<n; j++)
    {
      if(v[j] < v[min])
      {
        min = j;
      }
    	x	=	v[min];
      v[min] = v[i];
      v[i] = x;
    }
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

  selecaoDireta(N, v);

  printf("Vetor ordenado: ");
  for(i=0; i<N; i++)
  {
    printf("%d ", v[i]);
  }
  printf("\n");

  return 0;
}
