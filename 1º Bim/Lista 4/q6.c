/* 6- Desenvolva um programa que leia um inteiro positivo n seguido de n números
inteiros e imprima esses n números em ordem inversa. Seu programa deve possuir
funções para leitura do vetor. *pesquise uma função para gerar números aleatórios
para preencher o vetor.
*/

#include<stdio.h>
#include<stdlib.h>

int i;

void preencheVetor(int *v, int n)
{
  for(i=0; i<n; i++)
  {
    v[i] = 1 + (rand() % 10);
  }
}

void imprimeVetor(int *v, int n)
{
  for(i=0; i<n; i++)
  {
    printf("%d ", v[i]);
  }
  printf("\n");
}

void inverteVetor(int *v, int n)
{
  for(i=n-1; i>=0; i--)
  {
    printf("%d ", v[i]);
  }
  printf("\n");
}

int main()
{
  int *v, n;

  printf("Quantidade de números: \n");
  scanf("%d", &n);

  v = (int*) malloc(n*sizeof(int));

  preencheVetor(v, n);
  printf("Elementos do vetor: \n");
  imprimeVetor(v, n);
  printf("Elementos do vetor invertidos: \n");
  inverteVetor(v, n);

  return 0;
}
