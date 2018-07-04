/* 8 - Implementar um programa com uma função recursiva para mostrar os números
de 1 até N (ordem crescente). */

#include<stdio.h>

int numeros(int N)
{
  if(N==0)
  {
    return 1;
	}
	numeros(N-1);
	printf("%d ", N);
}

int main()
{
  int N, i;

  printf("Mostrar até o número: ");
  scanf("%d", &N);

  numeros(N);
  printf("\n");
}
