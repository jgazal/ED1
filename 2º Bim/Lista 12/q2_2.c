#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

struct lista{
  char caractere;
  struct lista *prox;
};
typedef struct lista Lista;

Lista *insere(Lista *l,char c)
{
  Lista* novo = (Lista*) malloc(sizeof(Lista));
  novo->caractere = c;
  novo->prox = l;
  return novo;
}

Lista *ordena(Lista *l)
{
  int cont_dig, cont_caract, cont;
  int i=0, j=0;

  Lista *p;

  for(p=l; p!=NULL; p = p->prox)
  {
    if(isdigit(p->caractere))
    {
      cont_dig++;
    }
    else
    {
    cont_caract++;
    }
  }
  char *vetor = (char*) malloc(cont_dig*sizeof(char));
  char *vetor2 = (char*) malloc(cont_caract*sizeof(char));

  for(p= l; p!=NULL; p = p->prox)
  {
    if(isdigit(p->caractere))
    {
      vetor[i]= p->caractere;
      i++;
    }
    else
    {
      vetor2[j] = p->caractere;
      j++;
    }
  }

  Lista *organizado;
  organizado = NULL;

  for(cont=0; cont<i; cont++)
  {
    organizado = insere(organizado,vetor[cont]);
  }
  for(cont=0; cont<j; cont++)
  {
    organizado = insere(organizado,vetor2[cont]);
  }
  return organizado;
}

void imprime(Lista *l)
{
  Lista *p = l;
  while(p!= NULL)
  {
    printf("%c",p->caractere);
    p = p->prox;
  }
}

int main()
{
  char caractere_user;
  int i,numero_caract;

  Lista* l;
  l=NULL;

  printf("Digite o numero de caracteres que voce deseja ordenar\n");
  scanf("%d%*c", &numero_caract);

  for(i=0; i<numero_caract; i++)
  {
    printf("Digite um caractere\n");
    scanf("%c%*c", &caractere_user);
    fflush(stdin);

    l=insere(l , caractere_user);
    fflush(stdin);
  }

  l = ordena(l);
  imprime(l);
  printf("\n");

  system("pause");

  return 0;
}
