#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>

#define N 1000
#define true 1
#define false 0;

typedef struct{
  int v[N];
  int topo;
}Pilha;

typedef int boolean;

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

char consultarPilha(Pilha *p, int i)
{
	return p->v[i];
}

boolean palindromo(Pilha *p){
	int i = 0, j = p->topo - 1;

	while(i < p->topo)
	{
		if(isalnum(p->v[i]))
		{
			while (!isalnum(p->v[j]))
			{
				j--;
			}
			if(p->v[i] != p->v[j])
			{
				return false;
			}
			j--;
		}
		i++;
	}
	return true;
}

//Imprime os elementos da pilha
void imprime(Pilha* p)
{
	int i;

	for(i=p->topo-1; i>=0; i--)
  {
		printf("%c", p->v[i]);
	}
}

//Função principal
int main()
{
	char c;
	int i;

  Pilha* p;
  p = cria();

	printf("Digite uma sequencia de caracteres (ENTER para confirmar)\n");
	while ((c = getchar()) != '\n' && c != EOF)
	{
		push(p, c);
	}
	for (i = p->topo-1; i>= 0; i--)
	{
		printf("%c", consultarPilha(p, i));
	}
	printf("\n");
	imprime(p);

	if(!palindromo(p))
	{
		printf(" nao");
	}
	printf(" é palindromo\n");

	return 0;
}
