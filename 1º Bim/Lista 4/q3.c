/* 3- Recursividade é um método no qual a solução de um problema depende da
solução de instâncias "menores" do mesmo problema. Esse método é realizado quando
uma sub-rotina (ex: função ou método) pode invocar a si mesma ou quando ela
pertence a um ciclo de chamadas de funções. Considere o algoritmo escrito em
pseudocódigo e assinale a alternativa que contém a saída desta função para
X(0), X(1), X(2), X(3), X(4), X(5), X(6), X(7), X(8), X(9).

Função X(n)
if n<2 then
  return n;
else
  return X(n-1) + X(n-2);

a) 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
b) 0, 1, 1, 3, 5, 7, 9, 11, 13, 15
c) 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
d) 0, 1, 2, 3, 5, 8, 13, 21, 34, 55
e) 0, 1, 2, 3, 6, 12, 24, 48, 96, 192
*/

#include<stdio.h>

int X(n)
{
  if(n<2)
  {
    return n;
  }
  else
  {
    return X(n-1) + X(n-2);
  }
}

int main()
{
  int i;

  /*printf("%d %d %d %d %d %d %d %d %d %d\n", X(0), X(1), X(2), X(3), X(4), X(5),
  X(6), X(7), X(8), X(9));*/

  for(i=0; i<=9; i++)
  {
    printf("%d ", X(i));
  }
  printf("\n");

  return 0;
}

//Resposta: a) 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 (Fibonacci)
