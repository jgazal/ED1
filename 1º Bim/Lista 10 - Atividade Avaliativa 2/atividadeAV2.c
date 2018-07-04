//Atividade Avaliativa 2

#include<stdio.h>
#include<stdlib.h>

struct lista{
    int info;
    struct lista *prox;
};
typedef struct lista Lista;

//Cria a lista vazia
Lista* cria()
{
    return NULL;
}

//Recebe o vetor e constroi a lista
Lista* constroi(int n, int* v)
{
    Lista* p;           
    Lista* q = NULL;    
    int i;

    for(i = n-1; i>=0; i--)
    {
        p = (Lista*) malloc(sizeof(Lista));
        p->prox = q;
        p->info = v[i];
        q = p;
    }
    return q;
}

//Função que recebe a lista e retira a quantidade de prefixos solicitados
Lista* retira_prefixo(Lista* l, int n)
{
    Lista* p = l;
    Lista* q;
    int cont = 1;

    while(p!=NULL && cont<=n)
    {
        cont = cont + 1;
        q = p->prox;
        free(p);
        p = q;
    }
    return p;
}

//Função que recebe a lista e retorna o comprimento
int comprimento(Lista* l)
{
    if(l==NULL)
    {
        return 0;
    }
    return 1 + comprimento(l->prox);
}

//Imprime a lista
void imprime(Lista* l)
{
    Lista* p;
    for(p=l; p!=NULL; p = p->prox)
    {
        printf("[%d] ", p->info);
    }
    printf("\n");
}


//Função Principal
int main()
{
    int i, v[5], opcao, qtdPrefixos, n;

    Lista* l;
    l = cria();

    do{
        printf("\n==========MENU==========\n");
        printf("[1] Constroi a lista\n");
        printf("[2] Retira prefixo\n");
        printf("[3] Comprimento da lista\n");
        printf("[4] Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1: 
                printf("\nQuantidade de números: ");
                scanf("%d", &n);
                //Gera valores aleatórios entre 1 e 10
                for(i=0; i<n; i++)
                {
                    v[i] = rand() % 10 + 1;
                }

                l = constroi(n, v);
                imprime(l);
                
                printf("\n");
            break;

            case 2:
                printf("\nRetirar quantos prefixos? ");
                scanf("%d", &qtdPrefixos);

                l = retira_prefixo(l, qtdPrefixos);
                imprime(l);

                printf("\n");
            break;

            case 3:
                printf("\nComprimento da lista: %d\n", comprimento(l));
            break;
            case 4:
                printf("\nSaindo...\n\n"); 
            break;

            default:
                printf("Valor inválido.\n");
        }
    }while(opcao!=4);
    
    return 0;
}
