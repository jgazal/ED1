/*10- Uma pilha é uma estrutura de dados que armazena uma coleção de itens de
dados relacionados e que garante o seguinte funcionamento: o último elemento a
ser inserido é o primeiro a ser removido. É comum na literatura utilizar os nomes
push e pop para as operações de inserção e remoção de um elemento em uma pilha,
respectivamente. O seguinte trecho de código em linguagem C define uma estrutura
de dados pilha utilizando um vetor de inteiros, bem como algumas funções para
sua manipulação.
A esse respeito, avalie as afirmações a seguir.
I. A complexidade computacional de ambas as funções push e pop e O(1).
 II. O valor exibido pelo programa seria o mesmo caso a instrução a += pop(p);
 fosse trocada por a += a;
III. Em relação ao vazamento de memória (memory leak), é opcional chamar a função
free(p), pois o vetor usado pela pilha é alocado estaticamente.
É correto o que se afirma em
Escolha uma:
a. I, apenas
b. III, apenas
***c. I e II, apenas 
d. II e III, apenas
e. I, II e III */

#include<stdio.h>
#include<stdlib.h>

typedef struct {
  int elementos[100];
  int topo;
}pilha;

pilha* cria_pilha()
{
  pilha* p = (pilha*) malloc (sizeof(pilha));
  p ->topo = -1;
  return p;
}

void push(pilha *p, int element)
{
  if (p ->topo >= 99)
  return;
  p->elementos[++p->topo] = element;
}

int pop(pilha *p)
{
  int a = p->elementos[p->topo];
  p->topo--;
  return a;
}

int main()
{
  pilha * p = cria_pilha( );

  push(p, 2);
  push(p, 3);
  push(p, 4);
  pop(p);
  push(p, 2);

  int a = pop(p) + pop(p);
  push(p, a);
  a += pop(p);
  //a += a;

  printf("%d\n", a);

  return 0;
}
