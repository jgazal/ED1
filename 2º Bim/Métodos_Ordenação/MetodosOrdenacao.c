#include<stdio.h>
#include<stdlib.h>

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
  int i, N, opcao;

  printf("Tamanho do vetor: ");
  scanf("%d", &N);
  int v[N];

  printf("Elementos do vetor: \n");
  for(i=0; i<N; i++)
  {
    scanf("%d", &v[i]);
  }

  system("clear");
  printf("\n[1] BubbleSort\n");
  printf("[2] Inserção Direta\n");
  printf("[3] Seleção Direta\n");
  printf("[4] Sair\n");
  printf("Opção: ");
  scanf("%d", &opcao);

  switch(opcao)
  {
    case 1:
      printf("\n");
      bubblesort(N, v);
    break;

    case 2:
      printf("\n");
      insercaoDireta(N, v);
    break;

    case 3:
      printf("\n");
      selecaoDireta(N, v);
    break;

    case 4:
      system("clear");
      printf("Saindo...\n");
    break;
    default:
      printf("Opção inválida\n");
  }

  printf("Vetor ordenado: ");
  for(i=0; i<N; i++)
  {
    printf("%d ", v[i]);
  }
  printf("\n");

  return 0;
}
