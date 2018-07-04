/* 7 - Desenvolve um programa que fa�a a aloca��o de um vetor com o tamanho definido pelo usu�rio. Desenvolva tamb�m, fun��es para:
- Preencher o vetor com n�meros aleat�rios;
- Imprimir recursivamente o vetor;
- Somar os elementos do vetor utilizando recursividade;
*/

#include <stdio.h>
#include <stdlib.h>

/*
	Fun��o para preencher um vetor com n�meros aleat�rios que variam de 1 at� n.
	
*/
void preencherVetor(int *v, int n)
{
	if (n > 1)
		preencherVetor(v, n - 1);
		
	v[n - 1] = 1 + (rand() % n);
}

/*
	Fun��o para imprimir os elementos de um vetor.	
*/
void imprimeVetor(int *v, int n)
{
	if (n > 1)
	    imprimeVetor(v, n - 1);
	
	printf("%d ", v[n - 1]);
}

/*
	Fun��o para somar os elementos de um vetor.
*/
int somarVetor(int *v, int n)
{
	if (n > 1)
		return v[n - 1] + somarVetor(v, n - 1);
	else
		return v[0];
}

int main()
{
	int *v, n;
	
	// Solicita o tamanho do vetor ao usu�rio
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	
	// Aloca mem�ria de acordo com o tamanho do vetor
	v = (int*) malloc(n * sizeof(int));
	
	// Ativa a fun��o recursiva para preenchimento do vetor
	preencherVetor(v, n);
	
	printf("\nOs elementos do vetor sao:\n");
	
	// Ativa a fun��o recursiva para imprimir os elementos do vetor
	imprimeVetor(v, n);
	
	// Exibe a soma dos elementos do vetor utilizando uma fun��o recursiva
	printf("\n\nA soma dos elementos do vetor eh igual a: %d\n", somarVetor(v, n));
	
	return 0;
}
