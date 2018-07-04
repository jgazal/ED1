/* 8 - Elabore um programa que declare 4 variáveis do tipo inteiro e 4 do tipo
ponteiro para inteiro, e faça com que as variáveis ponteiro apontem para as
variáveis inteiro. Coloque comandos que permitam modificar os valores das
variáveis inteiras através das variáveis ponteiro. */

#include<stdio.h>

modifica_valor(int *p1, int *p2, int *p3, int *p4)
{
  char variavel;
  int num;

  printf("Variável a ser alterada: ");
  scanf("%c", &variavel);

  switch(variavel)
  {
    case 'a':
      printf("Novo valor: ");
      scanf("%d", &num);
      *p1 = num;
    break;

    case 'b':
      printf("Novo valor: ");
      scanf("%d", &num);
      *p2 = num;
    break;

    case 'c':
      printf("Novo valor: ");
      scanf("%d", &num);
      *p3 = num;
    break;

    case 'd':
      printf("Novo valor: ");
      scanf("%d", &num);
      *p4 = num;
    break;

    default:
        printf("Variável inválida.\n");
  }
}

int main()
{
  int a, b, c, d;
  int *p1, *p2, *p3, *p4;

  a=b=c=d = 0;

  p1 = &a;
  p2 = &b;
  p3 = &c;
  p4 = &d;

  printf("%d %d %d %d\n", a, b, c, d);
  modifica_valor(p1, p2, p3, p4);
  printf("\nNovo valor: %d %d %d %d\n", a, b, c, d);

  return 0;
}
