/* 3- Reescreva a função de ordenação pelo método da bolha que implemente a
melhoria de finalizar a função quando o vetor já estiver ordenado em alguma
passagem. */

#include<stdio.h>

void bubblesort(int n, int v[])
{
  int i, j, aux;

  for(i=n-1; i>0; i--)
  {
    int troca = 0;
    for(j=0; j<i; j++)
    {
      if(v[j] > v[j+1]) {
        aux = v[j];
        v[j] = v[j+1];
        v[j+1] = aux;
        troca = 1;
      }
      if(troca==0) {
        return;
      }
    }
  }
}

int main()
{
  int v[8] = {8, 9, 27, 45, 14, 24, 58, 99};
  int i;

  bubblesort(8, v);

  for(i=0; i<8; i++)
  {
    printf("%d ", v[i]);
  }
  printf("\n");

  return 0;
}
