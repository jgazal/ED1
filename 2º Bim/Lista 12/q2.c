/* 2- Dada uma lista encadeada de caracteres formada por uma sequência alternada
de letras e dígitos, construa uma função que retorne uma lista na qual as letras
são mantidas na sequência original e os dígitos são colocados na ordem inversa.
Exemplos: A 1 E 5 T 7 W 8 G → A E T W G 8 7 5 1
          3 C 9 H 4 Q 6 → C H Q 6 4 9 3
Como mostram os exemplos, as letras devem ser mostradas primeiro, seguidas dos
dígitos. Sugestões:
- usar uma fila e uma pilha;
- investigue a biblioteca ctype.h para manipular os caracteres como letras e
números. */

#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0;

typedef int boolean;

typedef struct lista{
	char dado;
	struct lista *prox;
}Lista;

typedef struct{
	Lista *inicio;
	Lista *fim;
} Fila;

void criarFila(Fila *f)
{
	Fila* F = (Fila*) malloc(sizeof(Fila));
	F->fim = NULL;
	F->inicio = NULL;
}

boolean filaVazia(Fila *f)
{
	if(f->inicio == NULL)
  {
		return true;
	}
  else
  {
		return false;
	}
}

void enfileirar(Fila *f, char i)
{
	Fila *q = f;
	Lista *no = (Lista*) malloc(sizeof(Lista));
	no->dado = i;
	no->prox = NULL;
	if(q->inicio == NULL)
  {
		q->inicio = no;
	}
  else
  {
		(q->fim)->prox = no;
	}
	q->fim = no;
}

char desenfileirar(Fila *f)
{
	Fila *q = f;
	Lista *p = q->inicio;
	int i;
	q->inicio = p->prox;
	i = p->dado;
	if(q->inicio == NULL)
  {
		q->fim = NULL;
	}
	p->prox = NULL;
	free(p);
	return i;
}

void imprimirFila(Fila *f){
	Lista *q = f->inicio;
	while(q != NULL)
  {
		printf("%c ", q->dado);
	}
	printf("\n");
}

int main()
{
	Fila *f;
	criarFila(f);
	char c;

	while((c = getchar()) != '\n' && c != EOF)
  {
    scanf("%c", &c);
		enfileirar(f, c);
	}

	imprimirFila(f);

	return 0;
}
