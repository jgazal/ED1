/* 7 - Desenvolve um programa que faça a alocação de um vetor com o tamanho definido pelo usuário. Desenvolva também, funções para:
- Preencher o vetor com números aleatórios;
- Imprimir recursivamente o vetor;
- Somar os elementos do vetor utilizando recursividade;
*/

#include <stdio.h>
#include <stdlib.h>

/*
	Função para preencher um vetor com números aleatórios que variam de 1 até n.
	
*/
void preencherVetor(int *v, int n)
{
	if (n > 1)
		preencherVetor(v, n - 1);
		
	v[n - 1] = 1 + (rand() % n);
}

/*
	Função para imprimir os elementos de um vetor.	
*/
void imprimeVetor(int *v, int n)
{
	if (n > 1)
	    imprimeVetor(v, n - 1);
	
	printf("%d ", v[n - 1]);
}

/*
	Função para somar os elementos de um vetor.
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
	
	// Solicita o tamanho do vetor ao usuário
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	
	// Aloca memória de acordo com o tamanho do vetor
	v = (int*) malloc(n * sizeof(int));
	
	// Ativa a função recursiva para preenchimento do vetor
	preencherVetor(v, n);
	
	printf("\nOs elementos do vetor sao:\n");
	
	// Ativa a função recursiva para imprimir os elementos do vetor
	imprimeVetor(v, n);
	
	// Exibe a soma dos elementos do vetor utilizando uma função recursiva
	printf("\n\nA soma dos elementos do vetor eh igual a: %d\n", somarVetor(v, n));
	
	return 0;
}
