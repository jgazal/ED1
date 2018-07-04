/* 2- Considere estruturas de listas encadeadas que armazenam valores reais. O
tipo que apresenta um nó da lista é dado por:

struct lista{
  float info;
  struct lista *seguinte;
};
typedef struct lista Lista;

Implemente uma função que, dadas duas listas l1 e l2, concatene a lista l2 no
final da lista l1, conforme ilustra a figura abaixo:

l1-> [2.1]->[4.5]->[1.0]    l2-> [7.2]->[9.8]
                          ^ concatena(l1, l2)

      [2.1]->[4.5]->[1.0]->[7.2]->[9.8]

A função deve retornar a lista resultante da concatenação, obedecendo ao protótipo:
Lista* concatena(Lista* l1, Lista l2);

Observe que l1 e/ou l2 podem ser listas vazias.*/

#include<stdio.h>
#include<stdlib.h>

struct lista{
  float info;
  struct lista *seguinte;
};
typedef struct lista Lista;

Lista* inicializaLista()
{
  return NULL;
}

Lista* insereInicio(Lista* L, float x)
{
  Lista* aux;
  aux = (Lista*)malloc(sizeof(Lista));
  aux->info = x;
  aux->seguinte = L;
  return aux;
}

Lista* concatena (Lista* l1, Lista* l2)
{
  Lista* p; //variável auxiliar para percorrer a lista
  Lista* q; //variável auxiliar para criar a nova lista

  if (l1 == NULL)
  {
    return l2;
  }
  p = l1;
  do
  {
    q = p;
    p = p->seguinte;
  }while(p != NULL);
  q->seguinte = l2;
  return l1;
}

void imprimeLista(Lista* L)
{
  Lista* i;
  for(i=L; i!=NULL; i=i->seguinte)
  {
    printf("[%.1f] ", i->info);
  }
  printf("\n");
}

int main()
{
  Lista *L1;
  Lista *L2;
  Lista *L3;

  L1 = inicializaLista();
  L1 = insereInicio(L1, 1.0);
  L1 = insereInicio(L1, 4.5);
  L1 = insereInicio(L1, 2.1);

  L2 = inicializaLista();
  L2 = insereInicio(L2, 9.8);
  L2 = insereInicio(L2, 7.2);

  printf("Lista 1: ");
  imprimeLista(L1);
  printf("Lista 2: ");
  imprimeLista(L2);

  printf("Lista concatenada: ");
  L3 = concatena(L1, L2);
  imprimeLista(L3);
}
