/* 11 - Faça as funções necessárias para que os programas abaixo funcionem
conforme o esperado:

#include <stdio.h>
int main ()
{
  int a, b, erro;
  float c;

  scanf (“%d%d”, &a, &b);
  c = divide (a, b, &erro);
  if (erro)
    printf (“Erro: divisão por zero\n”);
  else
  printf (“%d dividido por %d = %.2f\n”, a, b,c);
return 0;
} */

#include<stdio.h>

float divide(int a, int b, int *erro)
{
  if(b==0)
  {
    *erro = 1;
    return 0;
  }
  else
  {
    *erro = 0;
    return (a/b);
  }
}

int main()
{
  int a, b, erro;
  float c;

  scanf("%d %d", &a, &b);
  c = divide(a, b, &erro);

  if(erro)
  {
    printf("Erro: divisão por zero\n");
  }
  else
  {
    printf("%d dividido por %d = %.2f\n", a, b, c);
  }

  return 0;
}
