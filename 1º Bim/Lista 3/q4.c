/* 4 - Qual o valor de X(4) ?

int X (int n) {
  if (n == 1 || n == 2)
    return n;
  else
    return X(n-1) + n * X(n-2);
} */

#include<stdio.h>

int X(int n)
{
  if(n == 1 || n == 2)
    return n;
  else
    return X(n-1) + n * X(n-2);
}

int main()
{
  printf("%d\n", X(4));
}

/* X(n-1) + n * X(n-2)
   X(4-1) + 4*X(4-2) =
   X(3) + 4*X(2) =
   X(3) + 4*2 =
   X(3) + 8 =
   X(3-1) + 3*X(3-2) + 8 =
   X(2) + 3*X(1) + 8 =
   2 + 3*1 + 8 =
   2 + 3 + 8 =
    13
*/
