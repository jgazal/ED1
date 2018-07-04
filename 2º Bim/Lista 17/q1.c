/* 1 - Dado o vetor v = (5, 2, 8, 1, 4, 2, 7) demonstre cada passagem para sua
ordenação utilizando o método de ordenação mergesort. Demonstre as divisões do
vetor.*/

#include<stdio.h>
#include<stdlib.h>

void intercala (int p, int q, int r, int v[])
{
  int i, j, k, *w;
  w = malloc ((r-p) * sizeof (int));
  i = p; j = q; k = 0;
  while (i < q && j < r) {
    if (v[i] <= v[j]) {
      w[k++] = v[i++];
    }
    else {
    w[k++] = v[j++];
    }
  }
  while (i < q) {
    w[k++] = v[i++];
  }
  while (j < r) {
    w[k++] = v[j++];
  }
  for (i = p; i < r; i++) {
    v[i] = w[i-p];
  }
  free (w);
}

void mergesort (int p, int r, int v[])
{
  int q;
  if (p < r-1) {
    q = (p + r)/2;
    mergesort (p, q, v);
    mergesort (q, r, v);
    intercala (p, q, r, v);
  }
}

int main()
{
  int i;
  int v[7] = {5, 2, 8, 1, 4, 2, 7};
  mergesort(0, 6, v);
  for(i=0; i<7; i++) {
      printf("%d ", v[i]);
  }
  printf("\n");
  return 0;
}
