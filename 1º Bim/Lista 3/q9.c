/* 9 - Implementar uma função recursiva para computar até o N-ésimo elemento da
série de Fibonnacci: 1, 1, 2, 3, 5, 8, ......

Considerando:
  fib(n)  -> n se n==0 ou n==1
          -> fin(n-1) + fin(n-2) se n>=2
*/

#include<stdio.h>

int fib(int n)
{
  if(n==0 || n==1)
  {
    return n;
  }
  if(n>=2)
  {
    return (fib(n-1) + fib(n-2));
  }
}

int main()
{
  int n, i;

  printf("Mostrar até o termo de ordem n da série de Fibonacci: ");
  scanf("%d", &n);

  for(i=0; i<n; i++)
  {
    printf("%d\t", fib(i+1));
  }
  printf("\n");
}
