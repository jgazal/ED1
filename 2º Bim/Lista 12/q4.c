
/* 4- Utilizando uma pilha, escreva uma função que receba um número inteiro
positivo no formato decimal e converte este número para o formato binário.
Exemplos:
5 → 101
13 → 1101
1 → 1
A função retorna uma pilha com os dígitos que fazem parte do número em binário.*/

#include<stdio.h>
#include<stdlib.h>
#define N 1000

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

//Imprime os elementos da pilha
void imprime(Pilha* p)
{
	int i;

  printf("Número em Binário: ");
	for(i=p->topo-1; i>=0; i--)
  {
		printf("%d", p->v[i]);
	}
  printf("\n");
}

//Função principal
int main()
{
	int n, resto;

  Pilha* p;
  p = cria();

	printf("Número em Decimal: ");
	scanf("%d", &n);

	while(n!=0)
  {
		resto = n%2;
		n = n/2;
		push(p, resto);
	}
	imprime(p);
}
