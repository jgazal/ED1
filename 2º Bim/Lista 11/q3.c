/* 3- Para executar um programa que contém chamadas a funções, o computador usa
uma pilha. Durante a execução do programa, toda vez que o computador encontra
uma chamada a uma função F, o "estado atual das coisas" é colocado em uma pilha
e a execução de F começa. Quando a execução de F terminar, o computador tira da
pilha o "estado" em que as coisas estavam antes da chamada de F e retoma a
execução do programa do ponto em que ela foi interrompida.
Agora suponha que durante a execução de F o computador encontra uma chamada a
uma função G, e que durante a execução de G encontra uma chamada a uma função H.
Você já percebeu o que acontece? Exemplos:

int G(int i, int b){
  int a;
  a = i + b;
  return a;
}

int F(int i, int j, int k){
  int c;
  c = |*2*| G(i, j);
  c = c + k;
  return c;
}

int main(){
  int x = 32, y = 12, z = 10;
  int w;
  w = |*1*| F(x, y, z);
  ...............
}

1. No ponto |*1*| a execução de main é temporariamente interrompida e os valores
x, y e z são guardados na pilha de execução (juntamente com a informação de que
parei no ponto |*1*|).

2. Começa a execução de F. No ponto |*2*| a execução de F é temporariamente
interrompida e os valores i, j e k são guardados na pilha de execução (juntamente
com a informação de que parei no ponto |*2*|).

3. Quando a execução G termina, tipo as informações da pilha e retomo a execução
de F do ponto onde parei.

4. Quando a execução de F termina, tiro as informações da pilha e retomo a
execução de main do ponto onde parei.

QUAL SERÁ O VALOR DE w NA FUNÇÃO PRINCIPAL?
*/

#include<stdio.h>

int G(int i, int b)
{
  int a;
  a = i + b;
  return a;
}

int F(int i, int j, int k)
{
  int c;
  c = G(i, j);
  c = c + k;
  return c;
}

int main()
{
  int x = 32, y = 12, z = 10;
  int w;
  w = F(x, y, z);
  printf("w = %d\n", w);

  return 0;
}
