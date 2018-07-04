/* 1- Considerando listas de valores inteiros, implemente uma função que receba
como parâmetro uma lista encadeada e um valor inteiro n e divida a lista em duas,
de tal forma que a segunda lista comece no primeiro nó logo após a primeira
ocorrência de n na lista original. A figura a seguir ilustra essa separação:

[3]->[17]->[5]->[12]->[1]
            ^ separa(l, 5)

[3]->[17]->[5]    nova lista->[12]->[1]

Essa função deve obedecer ao protótipo:
Lista* separa(Lista* l, int n);

A função deve retornar um ponteiro para a segunda subdivisão da lista original,
enquanto l deve continuar apontando para o primeiro elemento da primeira
subdivisão da lista. */

#include<stdio.h>
#include<stdlib.h>

struct no{
  int info;
  struct no *prox;
};
typedef struct no Lista;

Lista* inicializaLista()
{
  return NULL;
}

Lista* insereInicio(Lista* L, int x)
{
  Lista* aux;
  aux = (Lista*)malloc(sizeof(Lista));
  aux->info = x;
  aux->prox = L;
  return aux;
}

Lista* separa (Lista* l, int n)
{
  Lista* p; //variável auxiliar para percorrer a lista
  Lista* q; //variável auxiliar para nova lista

  for(p = l; p!=NULL; p = p->prox)
  {
    if (p->info == n)
    {
      q = p->prox;
      p->prox = NULL;
      return q;
    }
  }
  return NULL;
}

void imprimeLista(Lista* L)
{
  Lista* i;
  for(i=L; i!=NULL; i=i->prox)
  {
    printf("[%d] ", i->info);
  }
}

int main()
{
  Lista *L1;
  L1 = inicializaLista();
  L1 = insereInicio(L1, 1);
  L1 = insereInicio(L1, 12);
  L1 = insereInicio(L1, 5);
  L1 = insereInicio(L1, 17);
  L1 = insereInicio(L1, 3);
  printf("Lista: ");
  imprimeLista(L1);
  printf("\n");

  Lista* L2;
  L2 = separa(L1, 5);
  printf("L1: ");
  imprimeLista(L1);
  printf("\n");
  printf("L2: ");
  imprimeLista(L2);
  printf("\n");
}
