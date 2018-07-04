#include<stdio.h>
#include<stdlib.h>
#include "libListaSimples.h"
#include "libListaDupla.h"

//Inicializa a Lista Simplesmente Encadeada, retornando NULL
Lista* inicializaLista()
{
  return NULL;
}

//Inicializa a Lista Duplamente Encadeada, retornando NULL
ListaD* inicializaListaD()
{
  return NULL;
}

/* Insere elementos no início da Lista Simplesmente Encadeada, recebendo como
parâmetros de entrada a lista onde serão inseridos os elementos e a informação
do novo elemento, tendo como retorno a nova lista */
Lista* insereInicio(Lista* L, int x)
{
  Lista* aux;
  aux = (Lista*)malloc(sizeof(Lista));
  aux->info = x;
  aux->prox = L;
  return aux;
}

/* Função que recebe duas lista simplesmente encadeadas não ordenadas (ListaPares
e ListaImpares) e retorna uma lista duplamente encadeada circular contendo todos
os elementas das listas recebidas de forma ordenada */
ListaD* concatena(Lista* ListaPares, Lista* ListaImpares)
{
  ListaD* ListaDupla = inicializaListaD();
  while(ListaPares!=NULL)
  {
    //Insere os elementos da lista ListaPares em ListaDupla
    ListaDupla = insereOrdenado(ListaDupla, ListaPares->info);
    ListaPares = ListaPares->prox;
  }
  while(ListaImpares!=NULL)
  {
    //Insere os elementos da lista ListaImpares em ListaDupla
    ListaDupla = insereOrdenado(ListaDupla, ListaImpares->info);
    ListaImpares = ListaImpares->prox;
  }
  return ListaDupla;
}

/* Função que recebe os elementos da lista concatenada e os ordena em ordem
crescente, retornando a Lista Duplamente Encadeada com seus elementos ordenados */
ListaD* insereOrdenado(ListaD* L, int v)
{
  ListaD *temp = (ListaD*) malloc(sizeof(ListaD));
  ListaD *novo = (ListaD*) malloc(sizeof(ListaD));
  ListaD *menor;

  if(L == NULL)
  {
    L = (ListaD*) malloc(sizeof(ListaD));
    L->ant = NULL;
    L->prox = NULL;
    L->info = v;
    menor = L;
  }
  else if(L->prox == NULL)
  {
    novo->info = v;
    novo->ant = L;
    novo->prox = L;
    L->ant = novo;
    L->prox = novo;
    menor = L;
    if(v < L->info)
    {
      menor = novo;
    }
  }
  else
  {
    temp = L;
    menor = temp;
  	while(v >= temp->info)
    {
      temp = temp->prox;
      if(temp == L)
      {
        break;
      }
    }

    novo->info = v;
    temp->ant->prox = novo;
    novo->prox = temp;
    novo->ant = temp->ant;
    temp->ant = novo;

    if(v < L->info)
    {
      menor = novo;
    }
  }
  return menor;
}

/* Imprime os elementos da Lista Simplesmente Encadeada. Os valores são impressos
na ordem inversa de entrada */
void imprimeLista(Lista* L)
{
  Lista* i;
  for(i=L; i!=NULL; i=i->prox)
  {
    printf("[%d] ", i->info);
  }
}

/* Imprime os elementos da Lista Duplamente Encadeada. Os valores são impressos
ordenados na ordem Crescente e Decrescente */
void imprimeListaD(ListaD* L)
{
  ListaD* i;
  if (L != NULL)
  {
    //Imprime os elementos na ordem crescente
    printf("Crescente: ");
    i = L;
    do
    {
      printf("[%d] ", i->info);
      i = i->prox;
    }while (i != NULL && i != L);
    printf("\n");

  	//Imprimte os elementos na ordem decrescente
    printf("Descrescente: ");
    i = L->ant;
    if (i == NULL)
    {
      i = L;
    }
    while (i != L && i != NULL)
    {
      printf("[%d] ", i->info);
      i = i->ant;
    }
    if (i != NULL)
    {
      printf("[%d]", i->info);
    }
    printf("\n");
  }
}
