/* 6 - Escreva uma função iterativa e uma função recursiva para avaliar a * b
usando a adição, onde a e b são inteiros não-negativos. */

#include<stdio.h>

int multiplica(int a, int b)
{
  if(a==0 || b==0)
  {
    return 0;
  }
  if(a==1)
  {
    return b;
  }
  if(b==1)
  {
    return a;
  }
  //return a + multiplica(a, --b);
  return a + multiplica(a, b - 1);
}

int main()
{
  int a, b;

  printf("a: ");
  scanf("%d", &a);
  printf("b: ");
  scanf("%d", &b);

  printf("%d * %d = %d\n", a, b, multiplica(a, b));
}
