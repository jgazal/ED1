/* 5- Escreva um programa que tenha uma fila cujos elementos possuem um campo
inteiro representando sua prioridade. Quanto menor o valor deste campo, maior a
prioridade do elemento. Insira n elementos com prioridades diversas na fila e
depois divida a fila em duas, uma com elementos cuja prioridade é menor ou igual
ao valor fornecido pelo usuário e outra com os elementos restantes. */

#include<stdio.h>
#include<stdlib.h>

struct lista{
  int info;
  struct lista *prox;
};
typedef struct lista Lista;

struct fila{
  Lista *inicio;
  Lista *fim;
};
typedef struct fila Fila;

Fila* cria()
{
  Fila* f = (Fila*) malloc(sizeof(Fila));
  f->inicio = f->fim = NULL;
  return f;
}

Fila* insere(Fila* f, int n)
{
  Lista* nova = (Lista*) malloc(sizeof(Lista));
  nova->info = n;
  nova->prox = NULL;
  f->fim = nova;
}

Fila* separa(Fila* f, int n)
{
  Lista* p;
  Lista* nova;

  for(p=f; p!=NULL; p = p->prox)
  {
    if(p->info == n)
    {
      nova = p->prox;
      p->prox = NULL;
      return nova;
    }
  }
  return NULL;
}

void imprime(Fila* f)
{
  Lista* p;
  for(p=f->inicio; p!=NULL; p = p->prox)
  {
    printf("[%d] ", p->info);
  }
  printf("\n");
}

int main()
{
  Fila* f1;
  f1 = cria();

  insere(f1, 1);
  insere(f1, 12);
  insere(f1, 5);
  insere(f1, 17);
  insere(f1, 3);

  printf("Fila: ");
  imprime(f1);

  Fila* f2;
  f2 = separa(f1, 5);

  printf("Fila 1: ");
  imprime(f1);
  printf("Fila 2: ");
  imprime(f2);

  return 0;
}
