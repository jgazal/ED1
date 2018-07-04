/* 13 - Elabore um programa que armazene valores aleatórios em um vetor de
inteiros de 10 posições e depois, em outro vetor de ponteiros de inteiros de
tamanho 10, coloque os endereços dos valores do vetor de inteiros de forma
ordenada crescente, ficando a primeira posição do vetor de ponteiros com o
endereço do menor valor até a última posição que conterá o endereço do maior
valor. Crie funções para as operações indicadas. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int v[10], *p[10], x, i, j, *aux;

  printf("Vetor v[] com valores aleatórios: \n");
  for(i=0; i<10; i++)
  {
    x = 1 + (rand() % 10);  //Gera valores aleatórios, de 1 a 10
    v[i] = x;
    p[i] = &v[i];
    printf("v[%d] = %d, Endereço: %p\n", i, v[i], &v[i]);
  }

  //Ordenação de forma crescente
  for(i=0; i<10; i++)
  {
    for(j=1; j<10; j++)
    {
      if(*p[j] < *p[j-1])
      {
        aux = p[j];
        p[j] = p[j-1];
        p[j-1] = aux;
      }
    }
  }

  printf("\nVetor p[] com os endereços de v[] ordenados de forma crescente:\n");
  for(i=0; i<10; i++)
  {
    printf("p[%d] = %d, Endereço: %p\n", i, *p[i], p[i]);
  }
}
