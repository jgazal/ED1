// 5 - Use o heapsort para ordenar o vetor 16 15 14 13 12 11 10 9 8 7 6 5 4.

#include<stdio.h>

void constroi_heap (int n, int v[])
{
  int m, f, t;

  for(m = 1; m < n; m++)
  {
    f = m+1;

    while(f > 1 && v[f/2] < v[f])
    {
      t = v[f/2], v[f/2] = v[f], v[f] = t;
      f = f/2;
    }
  }
}

void heapsort (int n, int v[])
{
  int m, f, max, t;

  constroi_heap (n, v);

  for(m=n; m>1; m--)
  {
    max = v[1];
    f = 2;

    while(f <= m)
    {
      if(f < m && v[f] < v[f+1])
      {
        ++f;
      }
      v[f/2] = v[f];
      f *= 2;
    }
    f = f/2;
    if(f < m)
    {
      t = v[f], v[f] = v[m], v[m] = t;

      while(f > 1 && v[f/2] < v[f])
      {
        t = v[f], v[f] = v[f/2], v[f/2] = t;
        f = f/2;
      }
    }
    v[m] = max;
  }
}

int main()
{
  int v[13] = {16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4};
  int i;

  heapsort(13, v);

  for(i=0; i<13; i++)
  {
    printf("%d ", v[i]);
  }

  return 0;
}
