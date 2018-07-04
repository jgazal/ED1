/* 9 - Faça um programa onde um vetor de ponteiros tenha cada uma das suas
posições apontando para as equivalentes de um vetor de valores float. A posição
0 do vetor ponteiro deve apontar para a posicao 0 do vetor float e assim por
diante. Realize a impressão dos elementos do vetor de float através do vetor de
ponteiros. Defina um tamanho para o vetor e funções leitura e impressão do vetor.*/

#include<stdio.h>

#define tam 3

leitura(float *p[])
{
  int i;
  float valor;

  for(i=0; i<tam; i++)
  {
    printf("v[%d] =  ", i);
    scanf("%f", &valor);
    *p[i] = valor;
  }
}

impressao(float *p[])
{
  int i;

  printf("Impressão dos elementos do vetor de float através do vetor de ponteiros\n");

  for(i=0; i<tam; i++)
  {
    printf("p[%d] = %.2f\n", i, *p[i]);
  }
}

int main()
{
  float *p[tam], v[tam];
  int i;

  for(i=0; i<tam; i++)
  {
    p[i] = &v[i];
  }

  leitura(p);
  impressao(p);

  return 0;
}
