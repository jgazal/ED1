//Q7b - O que fazem os seguintes programas?

#include <stdio.h>

int main()
{
  int vet[3] = {4,9,13};
  int i;

  for(i=0;i<3;i++)
  {
    printf("\n%p ",vet+i);
  }
}
