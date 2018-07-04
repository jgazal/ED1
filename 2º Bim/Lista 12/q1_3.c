/* 1- Escreva um programa solicite ao usuário uma sequência de caracteres sem
limite máximo de tamanho e realize as seguintes operações usando uma pilha:
a) Imprimir o texto na ordem inversa;
b) Verificar se o texto é um palíndromo, ou seja, se a string é escrita da mesma
maneira de frente para trás e de trás para frente. Ignore espaços e pontos. */

#include<stdio.h>
#include<stdlib.h>
#define N 20

struct pilha{
  int v[N];
  int topo;
};
typedef struct pilha Pilha;

Pilha* cria()
{
  Pilha* p = (Pilha*) malloc(sizeof(Pilha));
  p->topo = 0;
  return p;
}

Pilha* push(Pilha* p, char c)
{
  p->v[p->topo] = c;
  (p->topo)++;
}

void imprime(Pilha* p)
{
  int i;

  for(i=p->topo-1; i>=0; i--)
  {
    printf("%c", p->v[i]);
  }
  printf("\n");
}

int main()
{
  char c;

  Pilha* p;
  p = cria();

  printf("Insira a frase: ");
  do{
    push(p, c);
  }while((c = getchar()) != '\n' && c != EOF);
  printf("Frase invertida: ");
  imprime(p);

  return 0;
}
