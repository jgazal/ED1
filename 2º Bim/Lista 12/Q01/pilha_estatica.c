/** Pilha est�tica **/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "pilha_estatica.h"

void push(Pilha **p, char i){
	(*p)->v[(*p)->topo] = i;
	((*p)->topo)++;
}

char pop(Pilha **p){
	((*p)->topo)--;
	return (*p)->v[(*p)->topo];
}

void criarPilha(Pilha **p){
	(*p) = (Pilha*) malloc(sizeof(Pilha));
	(*p)->topo = 0;
}

void destruirPilha(Pilha **p){
	free(p);
}

char consultarPilha(Pilha **p, int i){
	return (*p)->v[i];
}

boolean pilhaVazia(Pilha **p){
	if ((*p)->topo == 0)
		return true;
	else
		return false;
}

boolean pilhaCheia(Pilha **p){
	if ((*p)->topo == N)
		return true;
	else
		return false;
}

boolean palindromo(Pilha **p){
	int i = 0, j = (*p)->topo - 1;
	while (i < (*p)->topo){
		if (isalnum((*p)->v[i])){
			while (!isalnum((*p)->v[j])){
				j--;
			}
			if ((*p)->v[i] != (*p)->v[j]){
				return false;
			}
			j--;
		}
		i++;
	}
	return true;
}

void imprimirPilha(Pilha **p){
	int i;
	for (i = 0; i < (*p)->topo; i++)
		printf("%c", (*p)->v[i]);
}
