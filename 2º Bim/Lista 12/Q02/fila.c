#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

void enfileirar(Fila **f, char i){
	Fila *q = *f;
	Lista *no = (Lista*) malloc(sizeof(Lista));
	no->dado = i;
	no->prox = NULL;
	if (q->inicio == NULL){
		q->inicio = no;
	}else{
		(q->fim)->prox = no;
	}
	q->fim = no;
}

char desenfileirar(Fila **f){
	Fila *q = *f;
	Lista *p = q->inicio;
	int i;
	q->inicio = p->prox;
	i = p->dado;
	if (q->inicio == NULL){
		q->fim = NULL;
	}
	p->prox = NULL;
	free(p);
	return i;
}

void criarFila(Fila **f){
	*f = (Fila*) malloc(sizeof(Fila));
	(*f)->fim = NULL;
	(*f)->inicio = NULL;
}

void destruirFila(Fila **f){
	free(f);
}

boolean filaVazia(Fila **f){
	if ((*f)->inicio == NULL){
		return true;
	}else{
		return false;
	}
}

void imprimirFila(Fila **f){
	Lista *q = (*f)->inicio;
	while(q != NULL){
		printf("%c ", q->dado);
	}
	printf("\n");
}
