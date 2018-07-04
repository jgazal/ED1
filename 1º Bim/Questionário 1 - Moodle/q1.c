//Q1 - Analise o código abaixo, e apresente a saída resultante.

#include <stdio.h>

func(int *a, int b)
{
    int temp;

    temp = *a;
    //printf("temp = %d\n", temp);
    *a = b;
    //printf("a = %d\n", *a);
    b = temp;
    //printf("b = %d\n", b);
}

int main()
{
    int a = 10, b = 20;

    func(&a, b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

/*R: a=20, b=20.
  b=20 porque b não foi passado por referência.
  Em func ele foi alterado, mas em main o valor continua o mesmo.*/
