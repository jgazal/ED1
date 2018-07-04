/* 10 - Faça uma função que receba um valor inteiro como referência e retorne o
resto da divisão deste número por 10.*/

#include<stdio.h>

float Resto(int *valor)
{
    int divide;

    divide = *valor % 10;
    return divide;
}

int main()
{
  int valor, resto;

  printf("Número: ");
  scanf("%d", &valor);
  resto = Resto(&valor);

  printf("Resto da divisão: %d\n", resto);

  return 0;
}
