/* Realize uma pesquisa sobre a criação de uma biblioteca em C. Simule a criação
de bibliotecas que implementem as funções dos exercícios anteriores.

Para Compilar:
gcc -c biblioteca.c
gcc -o principal principal.c biblioteca.o
./principal   */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main()
{
  lista = inicializaLista();
  
  int opcao, op, n, apos, antes;

  do
  {
    system("clear");
    printf("=========================MENU=========================\n");
    printf("[1] Insere um novo nó no início da lista\n");
    printf("[2] Insere um novo nó no fim da lista\n");
    printf("[3] Realiza a busca de um elemento da lista\n");
    printf("[4] Imprime os elementos da lista\n");
    printf("[5] Retorna a informação do último nó da lista\n");
    printf("[6] Retorna a quantidade de nós da lista\n");
    printf("[7] Retorna a soma dos elementos da lista\n");
    printf("[8] Insere um novo nó após a informação de um elemento enviado por parâmetro\n");
    printf("[9] Insere um novo nó antes da informação de um elemento enviado por parâmetro\n");
    printf("[10] Remove um item da lista (o valor a ser removido deve ser enviado por parâmetro)\n");
    printf("[11] Remove todos os elementos da lista.\n");
    printf("[12] Sair\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch(opcao)
    {
      case 1:
        system("clear");
        do
        {
          printf("Elemento: ");
          scanf("%d", &n);
          lista = InsereInicio(lista, n);
          printf("Inserir novo elemento? [Sim = 1 / Não= 00] ");
          scanf("%d", &op);
        }while(op!=00);
      break;
      case 2:
        system("clear");
        printf("Elemento: ");
        scanf("%d", &n);
        InsereFim(lista, n);
        printf("\nDigite 0 para retornar\n");
        scanf("%d", &op);
      break;
      case 3:
        system("clear");
        printf("Buscar Elemento: ");
        scanf("%d", &n);
        if(Busca(lista, n) == 1)
        {
          printf("O elemento %d está na lista\n", n);
        }
        else
        {
          printf("O elemento %d não está na lista\n", n);
        }
        printf("\nDigite 0 para retornar\n");
        scanf("%d", &op);
      break;
      case 4:
        system("clear");
        Imprimir(lista);
        printf("\n");
        printf("\nDigite 0 para retornar\n");
        scanf("%d", &op);
      break;
      case 5:
        system("clear");
        printf("Último elemento da lista: %d\n", UltimoInf(lista));
        printf("\nDigite 0 para retornar\n");
        scanf("%d", &op);
      break;
      case 6:
        system("clear");
        printf("Quantidade de nós na lista: %d\n", QuantidadeNos(lista));
        printf("\nDigite 0 para retornar\n");
        scanf("%d", &op);
      break;
      case 7:
        system("clear");
        printf("Soma de todos os elementos da lista: %d\n", Soma(lista));
        printf("\nDigite 0 para retornar\n");
        scanf("%d", &op);
      break;
      case 8:
        system("clear");
        Imprimir(lista);
        printf("Inserir após o elemento: ");
        scanf("%d", &apos);
        printf("Inserir Elemento: ");
        scanf("%d", &n);
        InsereDepois(lista, n, apos);
				Imprimir(lista);
        printf("\nDigite 0 para retornar\n");
        scanf("%d", &op);
      break;
      case 9:
        system("clear");
        Imprimir(lista);
        printf("Inserir antes do elemento: ");
        scanf("%d", &antes);
        printf("Inserir Elemento: ");
        scanf("%d", &n);
        InsereAntes(lista, n, antes);
				Imprimir(lista);
        printf("\nDigite 0 para retornar\n");
        scanf("%d", &op);
      break;
      case 10:
        system("clear");
        Imprimir(lista);
        printf("Remover Elemento: ");
        scanf("%d", &n);
        lista = RemoveItem(lista, n);
				Imprimir(lista);
        printf("\nDigite 0 para retornar\n");
        scanf("%d", &op);
      break;
      case 11:
        system("clear");
        lista = RemoveTodos(lista);
        printf("Todos os elementos da lista foram removidos.\n");
        printf("\nDigite 0 para retornar\n");
        scanf("%d", &op);
      break;
      case 12:
        system("clear");
        printf("Saindo...\n");
      break;
    }
  }while(opcao!=12);

  return 0;
}
