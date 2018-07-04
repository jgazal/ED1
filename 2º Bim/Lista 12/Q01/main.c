/*
Para compilar no terminal do Linux:
gcc -c pilha_estatica.c
gcc -o main main.c pilha_estatica.o
./main
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "pilha_estatica.h"

int main() {
	Pilha **p;
	char c;
	int i;
	criarPilha(p);
	printf("Digite uma sequencia de caracteres (ENTER para confirmar)\n");
	while ((c = getchar()) != '\n' && c != EOF){
		if (pilhaCheia(p))
			printf("A pilha esta cheia\n");
		else
			push(p, c);
	}
	for (i = (*p)->topo - 1; i >= 0; i--)
		printf("%c", consultarPilha(p, i));
	printf("\n");
	imprimirPilha(p);
	if (!palindromo(p))
		printf(" nao");
	printf(" é palindromo\n");
	return 0;
}
