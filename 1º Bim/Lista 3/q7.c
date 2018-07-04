/* 7 - Escreva uma função em C que receba como parâmetros dois valores A e B e
calcula o valor de A^B , utilizando recursividade. */

#include<stdio.h>

int potencia(int A, int B)
{
  if(B==0)
  {
    return 1;
  }
  if(B==1)
  {
    return A;
  }
  return A*potencia(A, B-1);
}

int main()
{
    int A, B;

    printf("A: ");
    scanf("%d", &A);
    printf("B: ");
    scanf("%d", &B);
    printf("Potência: %d^%d = %d\n", A, B, potencia(A, B));
}
