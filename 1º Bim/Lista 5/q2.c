/* 2 - Desenvolver, baseado na estrutura da lista criada abaixo, funções que:

  struct no{
    int info;
    struct no *prox;
  };

a) Insere um novo nó no início da lista;
b) Insere um novo nó no fim da lista;
c) Realiza a busca de um elemento da lista;
d) Imprime os elementos da lista;
e) Retorna a informação do último nó da lista;
f) Retorna a quantidade de nós da lista;
g) Retorna a soma dos elementos da lista;
h) Insere um novo nó após a informação de um elemento enviado por parâmetro;
i) Insere um novo nó antes da informação de um elemento enviado por parâmetro;
j) Remove um item da lista (o valor a ser removido deve ser enviado por parâmetro);
k) Remove todos os elementos da lista. */

#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int info;
	struct no *prox;
} *Lista;

Lista inicializaLista()
{
	return NULL;
}

Lista InsereInicio(Lista lista, int i)
{
	Lista temp = (Lista) malloc(sizeof(Lista));
	if(temp != NULL)
  {
		temp->info = i;
		temp->prox = lista;
		return temp;
	}
  else
  {
    return lista;
  }
}

void InsereFim(Lista lista, int i)
{
	Lista temp = (Lista) malloc(sizeof(Lista));
	if(temp != NULL)
  {
		temp->info = i;
		temp->prox = NULL;
		while (lista->prox != NULL)
		{
			lista = lista->prox;
		}
		lista->prox = temp;
	}
  else
  {
    printf("Erro ao inserir!\n");
  }
}

int Busca(Lista lista, int n)
{
	int i = 0;
	while(lista != NULL)
	{
		if(lista->info == n)
			i = 1;

		lista = lista->prox;
	}
	return i;
}

void Imprimir(Lista lista)
{
	while(lista != NULL)
  {
		printf("%d ", lista->info);
		lista = lista->prox;
	}
  printf("\n");
}

int UltimoInf(Lista lista)
{
	while (lista->prox != NULL)
	{
		if(lista->prox == NULL)
    {
      return lista->info;
    }
		lista = lista->prox;
	}
	return lista->info;
}

int QuantidadeNos(Lista lista)
{
	int cont = 0;
	while (lista != NULL)
	{
		lista = lista->prox;
		cont++;
	}
	return cont;
}

int Soma(Lista lista)
{
	int soma = lista->info;

	do{
		lista = lista->prox;
		soma += lista->info;
	}while(lista->prox != NULL);

	return soma;
}

void InsereAntes(Lista lista, int i, int p)
{
	Lista temp1 = (Lista) malloc(sizeof(Lista));
	Lista temp2 = (Lista) malloc(sizeof(Lista));

	while (lista->prox != NULL)
	{
		temp1 = lista->prox;
		if(temp1->info == p)
		{
			temp2->info = i;
			temp2->prox = temp1;
			lista->prox = temp2;
			return;
		}
		lista = temp1;
	}
}

void InsereDepois(Lista lista, int i, int p)
{
	Lista temp = (Lista) malloc(sizeof(Lista));

	do
	{
		if(lista->info == p)
		{
			temp->info = i;
			temp->prox = lista->prox;
			lista->prox = temp;
			return;
		}
		lista = lista->prox;
	}while(lista->prox != NULL);
}

Lista RemoveItem(Lista lista, int i)
{
	Lista temp = NULL;
	if(lista->info == i)
  {
		return lista->prox;
	}

	for(temp = lista; temp  != NULL; temp = temp->prox)
  {
		if(temp->prox->info == i)
    {
			temp->prox = temp->prox->prox;
			return lista;
		}
	}
	return lista;
}

Lista RemoveTodos(Lista lista)
{
	Lista i;
	while (lista != NULL)
	{
		i = lista->prox;
		free(lista);
		lista = i;
	}
	return lista;
}

int main()
{
  Lista lista;
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
