/* 7- Reescreva a função de ordenação por seleção para que ordene o vetor
v[0..n-1] em ordem crescente, da seguinte maneira: selecione o maior elemento e
troque-o de posição com o elemento de posição n-1; selecione o segundo maior
elemento e troque-o de posição com o elemento de posição n-2; continue até que
o vetor esteja ordenado crescente. */

#include<stdio.h>

/*void selecao(int n, int v[])
{
  int i, j, min, x;

  for(i=0; i<n-1; i++)
  {
    min = i;
    for(j=i+1; j<n; j++)
    {
      if(v[j] < v[min]) {
        min = j;
      }
      x = v[i];
      v[i] = v[min];
      v[min] = x;
    }
  }
}*/

//Reescrevendo o método:
void selecao(int n, int v[])
{
  int i, j, min, x;

  for(i=0; i<n-1; i++)
  {
    min = i;
    //for(j=i+1; j<n; j++)
    //{
      if(v[j] > v[min])
      {
        min = j;
      }
      x = v[i];
      v[i] = v[min];
      v[min] = x;
    //}
  }
}

int main()
{
  int v[6] = {19, 12, 25, 2, 8, 16};
  int i;

  selecao(6, v);

  for(i=0; i<6; i++)
  {
    printf("%d ", v[i]);
  }
  printf("\n");

  return 0;
}
