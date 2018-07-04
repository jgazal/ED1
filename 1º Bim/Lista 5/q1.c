/* Implemente uma Lista Linear Estática de inteiros:
a) estrutura da lista - cada elemento da lista chamaremos de nó

             0    1    2    3    4 (MAX-1)
           ______________________________________________
           |   a1   |   a2   |        |        |        |
           |________|________|________|________|________|
           ^                 ^                          ^
           inicio da lista   fim da lista               fim do vetor
           (implícito)       (explícito)                (implícito)

define estrutura Lista como
    vetor de inteiros itens com MAX posições;
    um inteiro fim_da_lista que indica o final da lista.

A implementação deverá possuir funções para:
b) Inicializar_Lista - criar a lista e indicar que o fim_da_lista é zero;
c) Verificar se Lista é vazia - Uma lista é vazia quando o fim_da_lista é zero;
d) Verificar se Lista é cheia - Uma lista é cheia quando o fim_da_lista é igual a MAX;
e) Inserir elemento - atualizar o índice que indica o fim_da_lista;
f) Remover elemento - a função deve primeiro localizar a posição do elemento que
deseja remover para então removê-lo. */

#include <stdio.h>
#include <stdlib.h>
#define MAX 5

struct Lista
{
  int itens[MAX];
	int fim_da_lista;
};

void Inicializar_Lista(struct Lista *lista)
{
  int i, n;

  lista->fim_da_lista=0;

  printf("Inserir Elementos: \n");
  for(i=0; i<MAX; i++)
  {
    scanf("%d", &n);
    lista->itens[i] = n;
    lista->fim_da_lista = lista->fim_da_lista+1;
  }
}

void Lista_Vazia(struct Lista *lista)
{
  if(lista->fim_da_lista==0)
  {
    printf("Lista vazia\n");
  }
  else
  {
    printf("A lista possui %d itens\n", lista->fim_da_lista);
  }
}

void Lista_Cheia(struct Lista *lista)
{
  if(lista->fim_da_lista==MAX)
  {
    printf("Lista cheia\n");
  }
	else
  {
    printf("A lista não está cheia\n");
  }
}

void Remover_Elemento(struct Lista *lista)
{
  int op;

  printf("Remover item: \n");
	scanf("%d", &op);
	lista->itens[op] = 0;
	printf("Item %d removido", op);
}

int main()
{
  struct Lista lista;

  int opcao;

  do
  {
    system("clear");
    printf("==========MENU==========\n");
    printf("[1] Criar lista\n");
    printf("[2] Itens da lista\n");
    printf("[3] Verificar se a lista está cheia\n");
    printf("[4] Remover item\n");
    printf("[5] Sair\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch(opcao)
    {
      case 1:
      {
        system("clear");
        Inicializar_Lista(&lista);
        printf("Pressione 0 para voltar: ");
        scanf("%d", &opcao);
      break;
      }
      case 2:
      {
        system("clear");
        Lista_Vazia(&lista);
        printf("Pressione 0 para voltar: ");
        scanf("%d", &opcao);
      break;
      }
      case 3:
      {
        system("clear");
        Lista_Cheia(&lista);
        printf("Pressione 0 para voltar: ");
        scanf("%d", &opcao);
      break;
      }
      case 4:
      {
        system("clear");
        Remover_Elemento(&lista);
        printf("Pressione 0 para voltar: ");
        scanf("%d", &opcao);
      break;
      }
      case 5:
      {
        system("clear");
        printf("Saindo...\n");
      }
    }
  } while (opcao!=5);
  return 0;
}
