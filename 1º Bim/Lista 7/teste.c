#include<stdio.h>
#include<stdlib.h>

struct lista{
  int info;
  struct lista *prox;
};
typedef struct lista Lista;

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

//Verifica se lista está ordenada
Lista* verifica_ordenada(Lista* l)
{
  Lista* p = l;
  int ordenada = 1;
  while(p != NULL && ordenada)
  {
    if(p->info < p->prox->info)
    {
      return 0;
    }
    p = p->prox;
  }
  return ordenada;
}

//Encontra menor valor da lista
Lista* encontra_minimo(Lista* l)
{
  Lista* p = l;
  Lista* minimo;
  while(p != NULL)
  {
    if(p->info < p->prox->info)
    {
      minimo = p;
    }
    p = p->prox;
  }
  return minimo;
}

//Verifica se l1 e l2 são iguais - Iterativo
int igual(Lista* l1, Lista* l2)
{
  Lista* p1; //ponteiro para percorrer l1;
  Lista* p2; //ponteiro para percorrer l2;

  for(p1 = l1, p2 = l2; p1 != NULL && p2 != NULL; p1 = p1->prox, p2 = p2->prox)
  {
    if(p1->info != p2->info)
    {
      //return 0;
      printf(" Listas diferentes.\n");
    }
    //return p1==p2;
    printf(" Lista iguais");

  }
}

//Verifica se l1 e l2 são iguais - Recursivo
/*int igual(Lista* l1, Lista*l2)
{
  if(l1==NULL && l2==NULL)
  {
    return 1;
  }
  else if(l1==NULL || l2==NULL)
  {
    return 0;
  }
  else
  {
    return l1->info==l2->info && igual(l1-Lprox, l2->prox);
  }
}*/

void imprimeLista(Lista* L)
{
  Lista* i;
  for(i=L; i!=NULL; i=i->prox)
  {
    printf("[%d] ", i->info);
  }
  printf("\n");
}

int main()
{
  Lista *L1;
  Lista* L2;
  Lista* L3;

  L1 = inicializaLista();
  L1 = insereInicio(L1, 1);
  L1 = insereInicio(L1, 4);
  L1 = insereInicio(L1, 2);

  L2 = inicializaLista();
  L2 = insereInicio(L2, 9);
  L2 = insereInicio(L2, 7);
  L2 = insereInicio(L2, 3);

  printf("Lista 1: ");
  imprimeLista(L1);
  printf("Lista 2: ");
  imprimeLista(L2);

  printf("Lista igual?: ");
  L3 = igual(L1, L2);
  imprimeLista(L3);
}
