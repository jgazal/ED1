/* 6- Desenvolva um programa que leia um inteiro positivo n seguido de n números
inteiros e imprima esses n números em ordem inversa. Seu programa deve possuir
funções para leitura do vetor. *pesquise uma função para gerar números aleatórios
para preencher o vetor.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, n, *v;

    printf("Quantidade de números: \n");
    scanf("%d", &n);

    v = (int*) malloc(n*sizeof(int));

    for(i=0; i<n; i++)
    {
        v[i] = 1 + (rand() %10);
    }

    printf("Números gerados aleatoriamente.\n");
    for(i=0; i<n; i++)
    {
        printf("v[%d]= %d\n", i, v[i]);
        //printf("%d ", v[i]);
    }
    printf("\n");

    printf("Números do vetor invertidos.\n");
    for(i=n-1; i>=0; i--)
    {
        printf("v[%d] = %d\n", i, v[i]);
        //printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
