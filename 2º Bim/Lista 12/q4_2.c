/* 4- Utilizando uma pilha, escreva uma funcao que receba um numero inteiro
positivo no formato decimal e converte este numero para o formato binario.
Exemplos:
5 -> 101
13 -> 1101
1 -> 1
A funcao retorna uma pilha com os digitos que fazem parte do numero em binario.*/

#include<stdio.h>
#include<stdlib.h>
#define N 1000

typedef struct{
  int v[N];
  int topo;
}Pilha;

/* 
	Função que recebe uma referência para um endereço de uma pilha e 
	aloca memoria para esta pilha
*/
void cria(Pilha **p)
{
  *p = (Pilha*) malloc(sizeof(Pilha));
  (*p)->topo = 0;
}

/*
	Função que recebe uma referência para uma pilha
	e um inteiro e insere o inteiro no topo da pilha
*/
void push(Pilha *p, int i)
{
  p->v[p->topo] = i;
  (p->topo)++;
}
/*
	Função que recebe uma referência para uma pilha
	remove o elemento no topo da pilha e retorna seu valor
*/
int pop(Pilha *p) 
{
	(p->topo)--;
	return p->v[p->topo];
}

/*
	Função que retorna 1 se a pilha passada por referência está 
	vazia ou 0 caso contrário
*/
int pilhaVazia(Pilha *p)
{
	if (p->topo == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

/*
	Função que desaloca memória de uma referência de pilha
	passada por parâmetro
*/
void destruirPilha(Pilha *p)
{
	free(p);
}

//Imprime os elementos da pilha
void imprime(Pilha* p)
{
	printf("Numero em Binario: ");
	while(!pilhaVazia(p))
	{
		printf("%d", pop(p));
	}
	printf("\n");
}

/*
	Função que recebe uma referência para uma pilha e um inteiro 
	na base decimal e converte para binário colocando os dígitos
	na pilha
*/
void converteBinario(Pilha* p, int n)
{
	int resto;
	if (n == 0)
	{
		push(p,n);
	}
	while(n!=0)
  	{
		resto = n%2;
		n = n/2;
		push(p, resto);
	}
}

//Função principal
int main()
{
	int n;

	Pilha* p;
	cria(&p);

	printf("Numero em Decimal: ");
	scanf("%d", &n);

	converteBinario(p, n);
	imprime(p);
	destruirPilha(p);
}
