/* 7- Desenvolva um programa que faça a alocação de um vetor com o tamanho
definido pelo usuário. Desenvolva também, funções para:
- Preencher o vetor com números aleatórios;
- Imprimir recursivamente o vetor;
- Somar os elementos do vetor utilizando recursividade;
*/

#include<stdio.h>
#include<stdlib.h>

void preencheVetor(int *v, int n)
{
  if(n>1)
  {
    preencheVetor(v, n-1);
  }
	v[n-1] = 1 + (rand()%10);

  /*for(i=0; i<n; i++)
  {
    v[i] = 1 + (rand() %10);
  }*/
}

void imprimeVetor(int *v, int n)
{
  if(n>1)
  {
    imprimeVetor(v, n-1);
  }
	printf("v[%d] = %d\n", n-1, v[n-1]);

  /*for(i=0; i<n; i++)
  {
    printf("v[%d]= %d\n", i, v[i]);
  }
  printf("\n");*/
}

int somaVetor(int *v, int n)
{
  if(n==0)
  {
    return 0;
  }
  else
  {
    return (v[n-1] + somaVetor(v, n-1));
  }
}

int main()
{
  int *v, tamV;

  printf("Tamanho do vetor: ");
  scanf("%d", &tamV);

  v = (int*) malloc(tamV*sizeof(int));

  preencheVetor(v, tamV);
  printf("Elementos do vetor: \n");
  imprimeVetor(v, tamV);
  printf("Soma dos elementos do vetor: %d\n", somaVetor(v, tamV));

  return 0;
}
