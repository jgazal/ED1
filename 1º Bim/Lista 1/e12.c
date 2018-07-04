/* 12 - Faça os protótipos (apenas!!) das funções f(), g() e h() utilizadas pela
função main() abaixo:

#include <stdio.h>
int main ()
{
  int v[6]={0,10,20,40,50,60}, y;
  float x, z;

  x = f (10);
  g (x, &y);
  g (z, &v[4]);
  z = h (v[5], v);
  ... ... ...
} */

#include<stdio.h>

f(num)
{
  
}

g(float x, int *y)
{

}

g(float z, int *v[])
{

}

h(int v[], int v)
{

}

int main()
{
  int v[6] = {0, 10, 20, 40, 50, 60}, y;
  float x, z;

  x = f(10);

  g(x, &y);
  g(z, &v[4]);

  z = h(v[5], v);
  //... ... ...

  return 0;
}
