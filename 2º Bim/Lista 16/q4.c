// 4 - Escreva uma função que decida se um vetor v[1..m] é ou não um max-heap.

static void constroiHeap (int m, int v[])
{
   int k;

   for(k = 1; k < m; ++k)
   {
      int f = k+1;
      while(f > 1 && v[f/2] < v[f])
      {
         troca (v[f/2], v[f]);
         f /= 2;                        
      }
   }
}
