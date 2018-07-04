/*  2 - Dada a função abaixo, responda:

int F(int n)
{
  if (n < 4)
    return (3 * n);
  else
    return (2 * F(n - 4) + 5);
}

Quais são os valores de F(3) e de F(7)?
Percorra manualmente a função e encontre os valores.  */

#include<stdio.h>

int F(int n)
{
  if(n < 4)
    return (3 * n);
  else
    return (2 * F(n - 4) + 5);
}

int main()
{
  printf("F(3) = %d\n", F(3));
  printf("F(7) = %d\n", F(7));
}

/* F(3): 3*n =
         3*3 =
          9

   F(7): 2*F(n-4)+5 =
         2*F(7-4)+5 =
         2*F(3)+5 =
         2*9+5 =
         18+5 =
          23  */
