/* 3- Construa uma função que recebe uma lista encadeada de números inteiros e
retorna uma lista sem repetições, ou seja, uma lista onde cada número apareça
apenas uma vez.
Exemplo: 12 5 7 8 5 9 12 1 8 → 12 5 7 8 9 1 */

#include <stdio.h>
#include <stdlib.h>

struct lista
{
  int info;
  struct lista* prox;
};
typedef struct lista Lista;

Lista* cria()
{
  return NULL;
}

Lista* insere(Lista* l, int n)
{
  Lista* p = (Lista*) malloc(sizeof(Lista));
  p->info = n;
  p->prox = l;

  return p;
}

void remove_repetido(Lista *l)
{
  Lista *p, *q, *anterior, *temp;

  p = q = anterior = l;
  q = q->prox;

  while(p != NULL)
  {
    while(q != NULL && q->info != p->info)
    {
      anterior = q;
      q = q->prox;
    }

    if(q == NULL)
    {
      p = p->prox;

      if(p != NULL)
      {
        q = p->prox;
      }
    }
    else if(q->info == p->info)
    {
      anterior->prox = q->prox;
      temp = q;
      q = q->prox;

      free(temp);
    }
  }
}

void imprime(Lista* l)
{
  Lista* p = l;

  while(p != NULL)
  {
    printf("%d ", p->info);
    p = p->prox;
  }
  printf("\n");
}

void libera(Lista* l)
{
  Lista* temp = l;

  l = l->prox;

  while (l != NULL)
  {
    free(temp);
    temp = l;
    l = l->prox;
  }
}

int main()
{
  int n, opcao;

  Lista* l;

  printf("Inserir elementos na lista: \n");
  l = cria();

  do
  {
    printf("Número: ");
    scanf("%d", &n);

    l = insere(l, n);

    printf("Continuar [Sim = 1 / Não = 0]: ");
    scanf("%d", &opcao);
  }while(opcao != 0);
  printf("\n");

  printf("Lista: ");
  imprime(l);

  remove_repetido(l);
  printf("Lista sem elementos repetidos: ");
  imprime(l);
  
  libera(l);

  return 0;
}
