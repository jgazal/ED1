#include<stdio.h>

void bubblesort(int n, int* v)
{
  int i, j;

  for(i=0; i<n-1; i++)
  {
    for(j=0; j<n-i-1; j++)
    {
      if(v[j] > v[j+1])
      {
        int temp = v[j];
        v[j] = v[j+1];
        v[j+1] = temp;
      }
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

  bubblesort(N, v);

  printf("Vetor ordenado: ");
  for(i=0; i<N; i++)
  {
    printf("%d ", v[i]);
  }
  printf("\n");

  return 0;
}
