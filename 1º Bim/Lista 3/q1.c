/* 1 - Quantas chamadas recursivas acontecerão na função abaixo para Fat(6):

int fat(int n)
{
  if (n <= 1)
    return n;
  else
    return n * fat(n -1);
} */

#include<stdio.h>

int fat(int n)
{
  if(n <= 1)
    return n;
  else
    return n * fat(n-1);
}

int main()
{
  printf("%d\n", fat(6));
}

/* 1! = 1*1 = 1
   2! = 2*1! = 2*1 = 2
   3! = 3*2! = 3*2 = 6
   4! = 4*3! = 4*6 = 24
   5! = 5*4! = 5*24 = 120
   6! = 6*5! = 6*120 = 720

   Serão feitas 5 chamadas recursivas.
*/
