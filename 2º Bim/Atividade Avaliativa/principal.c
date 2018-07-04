/*
Para compilar no terminal do Linux:
gcc -c funcoes.c
gcc -o principal principal.c funcoes.o
./principal
*/

#include<stdio.h>
#include<stdlib.h>
#include "biblioteca.h"

//Função principal
int main()
{
  int i, N, op, opcao;

  //Menu para escolha da quantidade de elementos do vetor.
  system("clear");
  printf("Tamanho do vetor: ");
  printf("\n[1] Cenário 1 - 5000\n");
  printf("[2] Cenário 2 - 50000\n");
  printf("[3] Cenário 3 - 500000\n");
  printf("Opção: ");
  scanf("%d", &op);

  if(op==1)
  {
    N = 5000;
  }
  else if(op==2)
  {
    N = 50000;
  }
  else if(op==3)
  {
    N = 500000;
  }

  //Chamada da função para escolha do tipo de ordenação.
  menuOpOrdenacao(N);

  return 0;
}
