/* 3- Considere uma lista simplesmente encadeada que armazena os seguintes dados
de alunos de uma disciplina:
  -Número de matrícula: número inteiro
  -Nome: com até 80 caracteres
  -Média na disciplina: número de ponto flutuante

a) Considere que o tipo que representa um nó da lista é dado por:
typedef struct lista Lista;
Defina a estrutura denominada lista, que tenha os campos apropriados para guardar
as informações de um aluno na lista, conforme descrito acima.

b) Implemente uma função, que insira, em ordem crescente de número de matrícula,
os dados de um novo aluno na lista. Essa função deve obedecer ao seguinte protótipo,
retornando o ponteiro para o primeiro elemento:
Lista* ins_ordenado(Lista* l, int mat, char* nome, float nota);   */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct lista{
  int matricula;
  char nome[80];
  float media;
  struct lista* proximo;
};
typedef struct lista Lista;

Lista* inicializaLista()
{
  return NULL;
}

Lista* ins_ordenado(Lista* L, int mat, char* nome, float nota)
{
  Lista* p = L;
  Lista* ant = NULL;

  Lista* novo = (Lista*)malloc(sizeof(Lista));
  novo->matricula = mat;
  strcpy(novo->nome, nome);
  novo->media = nota;
  novo->proximo = NULL;
  if(p==NULL)
  {
    return novo;
  }
  while((p!=NULL) && (novo->matricula > p->matricula))
  {
    ant = p;
    p = p->proximo;
  }
  if(ant == NULL)
  {
    novo->proximo = p;
    return novo;
  }
  novo->proximo = ant->proximo;
  ant->proximo = novo;

  return L;
}

void imprimeLista(Lista* L)
{
  Lista* i;
  for(i=L; i!=NULL; i=i->proximo)
  {
    printf("Nome: %s\n", i->nome);
    printf("Matrícula: %d\n", i->matricula);
    printf("Média: %.1f\n", i->media);
    printf("\n");
  }
}

int main()
{
  Lista *L;
  L = inicializaLista();

  L = ins_ordenado(L, 7, "João", 9.8);
  L = ins_ordenado(L, 3, "Maria", 8.9);
  L = ins_ordenado(L, 5, "Ana", 9.2);

  imprimeLista(L);

  return 0;
}
