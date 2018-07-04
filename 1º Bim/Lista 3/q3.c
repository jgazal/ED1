/* 3 - Quantas chamadas recursivas acontecerão para a chamada calcRec(2,5) da
função abaixo:

int calcRec(int a, int b)
{
  if(b == 1)
    return a;
  else
    return a + calcRec(a,--b);
} */

#include<stdio.h>

int calcRec(int a, int b)
{
  if(b == 1)
    return a;
  else
    return a + calcRec(a,--b);
}

int main()
{
    printf("%d\n", calcRec(2, 5));
}

/* a + calcRec(a,--b) =
   2 + calcRec(2, --5) =
   2 + 2 + calcRec(2, --4) =
   2 + 2 + 2 + calcRec(2, --3) =
   2 + 2 + 2 + 2 + calcRec(2, --2) =
   2 + 2 + 2 + 2 + calcRec(2, --1) =
   2 + 2 + 2 + 2 + 2 =
  10

  R: 5 chamadas recursivas.
*/
