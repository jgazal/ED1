/* 2- Observe o algoritmo a seguir, que utiliza o conceito de função recursiva.

algoritmo "MDA"
var
  X, W, N : inteiro
funcao FF(Y:inteiro):inteiro
inicio
  N <-N + 1
  se Y < 2 entao
    retorne 1
  senao
    retorne Y * FF(Y-1)
  fimse
fimfuncao
inicio
  X<-5
  N<-0
  W<-FF(X)
  W<-W-50
  escreval(W, N)
fimalgoritmo

Após a execução do algoritmo, os valores de W e N serão, respectivamente:
a) 120 e 5
b) 120 e 1
c) 70 e 0
d) 70 e 5
e) 70 e 1
*/

#include<stdio.h>

int X, W, N;

int FF(int Y)
{
  N = N+1;

  if(Y<2)
  {
    return 1;
  }
  else
  {
    return Y * FF(Y-1);
  }
}

int main()
{
  X = 5;
  N = 0;
  W = FF(X);
  W = W-50;

  printf("W = %d, N = %d\n", W, N);

  return 0;
}

//Resposta: d) 70 e 5
