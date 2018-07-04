#include<stdio.h>

void leitura(int array)
{

}

void verifica(int array[], int *min, int *max)
{
  int i;

  *min = array[0];
  *max = array[0];

  for(i=1; i<N; i++)
  {
    if(array[i] < *min)
    {
      *min = array[i];
    }
    if(array[i] > *max)
    {
      *max = array[i];
    }
  }
}

int main()
{
  int array[N], min, max, n;

  leitura(array);
  //scanf("%d", &n);
  //array = (int *) malloc(sizeof (int) * n);
  verifica(array, &min, &max);
}
