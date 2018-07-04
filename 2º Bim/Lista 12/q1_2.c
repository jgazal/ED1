/* 1- Escreva um programa solicite ao usuário uma sequência de caracteres sem
limite máximo de tamanho e realize as seguintes operações usando uma pilha:
a) Imprimir o texto na ordem inversa;
b) Verificar se o texto é um palíndromo, ou seja, se a string é escrita da mesma
maneira de frente para trás e de trás para frente. Ignore espaços e pontos. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 50

typedef struct{
  int v[N];
  int topo;
}Pilha;

Pilha* cria()
{
  Pilha* p = (Pilha*) malloc(sizeof(Pilha));
  p->topo = 0;
  return p;
}

//Insere no início da pilha
void push(Pilha *p, int i)
{
  p->v[p->topo] = i;
  (p->topo)++;
}

void pop(Pilha* p)
{
  (p->topo)--;
  return p->v[p->topo];
}

int main()
{
  int i, escolha;
  char s[N], b;

  Pilha* p;
  p = cria();

  while (1)
  {
    printf("Frase: ");
    scanf("%s", s);

    for(i=0; s[i]!='\0'; i++)
    {
      b = s[i];
      push(p, b);
    }

    for(i=0; i<(strlen(s)/2); i++)
    {
      if(p->topo == p->v[i])
      {
        pop(p);
        (p->v[i])++;
      }
      else
      {
        printf("%s não é um palindromo\n", s);
        break;
      }
    }

    if((strlen(s) / 2) == p->v[i])
    {
      printf("%s é palindromo\n", s);
    }
    p->v[i]  =  0;
    p->topo  =  -1;
    break;
  }
}
