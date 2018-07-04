/* 1 - Um vetor contém os elementos exibidos a seguir. Mostre o conteúdo do vetor
depois de ter sido executada a primeira passagem do método shellsort.
O fator de incremento é h = 3.

V[0] V[1] V[2] V[3] V[4] V[5] V[6] V[7] V[8] V[9] V[10] V[11] V[12]
 24    4    8   14    90   8    67  27   45   19    91    99    58    */

#include<stdio.h>

 void shellSort(int n, int *v)
 {
   int i , j , x;
   int p = 1;

   while(p < n)
   {
     p = 3*p+1;
   }
   while(p > 1)
   {
     p /= 3;
     for(i=p; i<n; i++)
     {
       x = v[i];
       j = i;
       while(j>=p && x<v[j-p])
       {
         v[j] = v[j-p];
         j = j-p;
       }
       v[j] = x;
     }
   }
 }

 int main()
 {
   int v[13] = {24, 4, 8, 14, 90, 8, 67, 27, 45, 19, 91, 99, 58};
   int i;

   shellSort(13, v);

   for(i=0; i<13; i++)
   {
     printf("%d ", v[i]);
   }

   return 0;
 }
