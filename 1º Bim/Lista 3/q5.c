/* 5 - A função recursiva abaixo está correta? Justifique sua resposta.

int XX (int n) {
  if (n == 0)
    return 0;
  else
    return XX (n/3+1) + n;
} */

#include<stdio.h>

int XX(int n)
{
  if(n == 0)
    return 0;
  else
    return XX(n/3+1) + n;
}

int main()
{
  int n;

  printf("Digite um número: ");
  scanf("%d", &n);

  printf("%d\n", XX(n));
}

/* R: Incorreta. Só haverá retorno se n=0.
Para outros valores não tem condição de parada, pois nunca vai atingir 0 (zero)*/
