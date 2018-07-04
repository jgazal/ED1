#include<stdio.h>
#include<stdlib.h>

int somaVetor(int *v, int n)
{
  if(n==0)
  {
    return 0;
  }
  else
  {
    return (v[n-1] + somaVetor(v, n-1));
  }
}

int main()
{
  int tamV, i;

  printf("Tamanho do vetor: ");
  scanf("%d", &tamV);

  int v[tamV];

  //v = (int*) malloc(tamV*sizeof(int));

  //Preenche vetor
  for(i=0; i<tamV; i++)
  {
    v[i] = 1 + (rand() %10);
  }

  //imprime vetor
  for(i=0; i<tamV; i++)
  {
    printf("v[%d]= %d\n", i, v[i]);
  }
  printf("\n");

  //Soma vetor
  printf("%d\n", somaVetor(&v, tamV));

  return 0;
}
