/*
Para compilar no terminal do Linux:
gcc -c fila.c
gcc -o main main.c fila.o
./main
*/

#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main() {
	Fila **f;
	criarFila(f);
	char c;

	while((c = getchar()) != '\n' && c != EOF){
		enfileirar(f, c);
	}

	imprimirFila(f);

	return 0;
}
