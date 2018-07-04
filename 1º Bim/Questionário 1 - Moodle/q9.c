/* Desenvolva um programa com uma função MinMax que receba um vetor inteiro v[0..n-1]
e os endereços de duas variáveis inteiras por parâmetro, digamos min e max, e
deposite nessas variáveis o valor de um elemento mínimo e o valor de um elemento
máximo do vetor. Imprima os valores mínimo e máximo na função principal. */

#include <stdio.h>
#include <stdlib.h>

MinMax(int *vetor, int num, int *min, int *max)
{
    int i;

    *min = vetor[0];
    *max = vetor[0];

    for(i=1; i<num; i++)
    {
        if(vetor[i] > *max)
        {
            *max = vetor[i];
        }
        else if(vetor[i] < *min)
        {
            *min = vetor[i];
        }
    }
}

int main()
{
    int num, i, *vetor, min, max;

    printf("Quantidade de números: ");
    scanf("%d", &num);

    vetor = malloc(num * sizeof(int));

    for(i=0; i<num; i++)
    {
        printf("v[%d] =  ", i);
        scanf("%d", &vetor[i]);
    }

    MinMax(vetor, num, &min, &max);
    printf("Min =  %d | Max =  %d.\n", min, max);

    return 0;
}
