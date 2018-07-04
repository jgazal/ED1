/* 4- Seja a função recursiva f definida como

f(a, b)
  se b=0 então
    retorna a
  senão
    retorna f(b, a MOD b)

onde x MOD y é o resto da divisão de x por y. O valor de f(30, 21) é:
a) 0
b) 1
c) 3
d) 7
e) 9
*/

#include<stdio.h>

int f(a, b)
{
  if(b==0)
  {
    return a;
  }
  else
  {
    return f(b, (a%b));
  }
}

int main()
{
  printf("%d\n", f(30, 21));

  return 0;
}

//Resposta: c) 3
