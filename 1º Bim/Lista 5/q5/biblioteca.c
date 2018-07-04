#include<stdio.h>
#include<stdlib.h>
#include "biblioteca.h"

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
