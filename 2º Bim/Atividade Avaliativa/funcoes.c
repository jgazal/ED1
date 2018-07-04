#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "biblioteca.h"

/* Função do método de ordenação Bolha. A função recebe a quantidade de elementos
e o vetor, ordenando os elementos. */
void bolha(int n, int *v)
{
  int i, j, aux;
	double qtdTrocas = 0, qtdComparacoes = 0;

  for(i=0; i<n-1; i++)
  {
    for(j=0; j<n-i-1; j++)
    {
	  	qtdComparacoes++;
      if(v[j] > v[j+1])
      {
      	qtdTrocas++;
        aux = v[j];
        v[j] = v[j+1];
        v[j+1] = aux;
      }
    }
  }
  printf("Trocas: %.0lf\n", qtdTrocas);
  printf("Comparações: %.0lf\n", qtdComparacoes);
}

/* Função do método de ordenação Bolha Melhorado. A função recebe a quantidade
de elementos e o vetor, ordenando os elementos. */
void bolhaMelhorado(int n, int *v)
{
  int i, j, aux, troca;
	double qtdTrocas = 0, qtdComparacoes = 0;

  for(i=n-1, troca = 1; i>0 && troca == 1; i--)
  {
    troca = 0;
    for(j=0; j<i; j++)
    {
    	qtdComparacoes++;
      if(v[j] > v[j+1])
      {
      	qtdTrocas++;
        aux = v[j];
        v[j] = v[j+1];
        v[j+1] = aux;
        troca = 1;
      }
    }
  }
  printf("Trocas: %.0lf\n", qtdTrocas);
  printf("Comparações: %.0lf\n", qtdComparacoes);
}

/* Função do método de ordenação QuickSort. A função recebe o vetor, elemento a
esquerda, elemento a direita, quantidade de comparações e quantidade de trocas,
ordenando os elementos. */
void quicksort(int *v, int esq, int dir, double *qtdComparacoes, double *qtdTrocas)
{
  int salva;
  int i = esq;
  int j = dir;
  int p = v[(i+j)/2];

  do
  {
    while(v[i] < p)
    {
  		(*qtdComparacoes)++;
      i++;
    }
    while(p < v[j])
    {
  		(*qtdComparacoes)++;
      j--;
    }
  	(*qtdComparacoes)++;
    if(i <= j)
    {
    	(*qtdTrocas)++;
      salva = v[i];
      v[i] = v[j];
      v[j] = salva;
      i++;
      j--;
    }
  } while(i <= j);
  (*qtdComparacoes)++;
  if(esq < j)
  {
    quicksort(v, esq, j, qtdComparacoes, qtdTrocas);
  }
  (*qtdComparacoes)++;
  if(i < dir)
  {
    quicksort(v, i, dir, qtdComparacoes, qtdTrocas);
  }
}

/* Função do método de ordenação Inserção Direta. A função recebe a quantidade
de elementos e o vetor, ordenando os elementos. */
void insercaoDireta(int	n, int *v)
{
  int	i, j, aux;
	double qtdTrocas = 0, qtdComparacoes = 0;

  for(i=1; i<n; i++)
  {
    aux	=	v[i];
    qtdComparacoes++;
    for(j=i-1; j>=0	&& aux<v[j]; j--)
    {
      v[j+1] = v[j];
    	qtdComparacoes++;
    }
    qtdTrocas++;
    v[j+1] = aux;
	}
  printf("Trocas: %.0lf\n", qtdTrocas);
  printf("Comparações: %.0lf\n", qtdComparacoes);
}

/* Função do método de ordenação ShellSort. A função recebe a quantidade
de elementos e o vetor, ordenando os elementos. */
void shellSort(int n, int *v)
{
  int i , j , x;
  int p = 1;
	double qtdTrocas = 0, qtdComparacoes = 0;

  qtdComparacoes++;
  while(p < n)
  {
    p = 3*p+1;
  	qtdComparacoes++;
  }
  while(p > 1)
  {
    p /= 3;
    for(i=p; i<n; i++)
    {
      x = v[i];
      j = i;
  		qtdComparacoes++;
      while(j>=p && x<v[j-p])
      {
        v[j] = v[j-p];
        j = j-p;
  			qtdComparacoes++;
      }
  		qtdTrocas++;
      v[j] = x;
    }
  }
  printf("Trocas: %.0lf\n", qtdTrocas);
  printf("Comparações: %.0lf\n", qtdComparacoes);
}

/* Função do método de ordenação Seleção Direta. A função recebe a quantidade
de elementos e o vetor, ordenando os elementos. */
void selecaoDireta(int n, int *v)
{
  int i, j, min, x;
	double qtdTrocas = 0, qtdComparacoes = 0;

  for(i=0; i<n-1; i++)
  {
    min = i;
    for(j=i+1; j<n; j++)
    {
  		qtdComparacoes++;
      if(v[j] < v[min])
      {
        min = j;
      }
      qtdTrocas++;
    	x	=	v[min];
      v[min] = v[i];
      v[i] = x;
    }
  }
  printf("Trocas: %.0lf\n", qtdTrocas);
  printf("Comparações: %.0lf\n", qtdComparacoes);
}

/* Função do método de ordenação HeapSort. A função recebe a quantidade
de elementos e o vetor, ordenando os elementos. */
void heapsort(int n, int *v)
{
  int i = n/2, p, f, t;
	double qtdTrocas = 0, qtdComparacoes = 0;

 	qtdComparacoes++;
  while(1)
  {
 		qtdComparacoes++;
    if (i > 0)
    {
      i--;
      t = v[i];
    }
    else
    {
      n--;
      if(n == 0)
      {
  			printf("Trocas: %.0lf\n", qtdTrocas);
  			printf("Comparações: %.0lf\n", qtdComparacoes);
        return;
      }
      qtdTrocas++;
      t = v[n];
      v[n] = v[0];
    }
    p = i;
    f = i*2+1;
 		qtdComparacoes++;
    while(f < n)
    {
 			qtdComparacoes++;
      if((f+1 < n) && (v[f+1] > v[f]))
      {
        f++;
      }
 			qtdComparacoes++;
      if(v[f] > t)
      {
      	qtdTrocas++;
        v[p] = v[f];
        p = f;
        f = p*2+1;
      }
      else
      {
        break;
      }
    }
    v[p] = t;
  }
  printf("Trocas: %.0lf\n", qtdTrocas);
  printf("Comparações: %.0lf\n", qtdComparacoes);
}

/* Função de impressão. A função recebe a quantidade de elementos e o vetor,
ordenando os elementos. */
void imprime(int N, int *v)
{
  int i;

  printf("Vetor ordenado: ");
  for(i=0; i<N; i++)
  {
    printf("%d ", v[i]);
  }
  printf("\n");
}

/* Menu para escolha do método de ordenação, impressão dos elementos sem ordenação,
ou sair do programa. A função recebe a quantidade de elementos e o vetor, imprimindo
os elementos na ordem escolhida e o tempo de processamento da operação. */
void menu(int N, int *v)
{
  int opcao;

  system("clear");
  printf("\n[1] Bolha\n");
  printf("[2] Bolha Melhorado\n");
  printf("[3] Quicksort\n");
  printf("[4] Inserção Direta\n");
  printf("[5] ShellSort\n");
  printf("[6] Seleção Direta\n");
  printf("[7] HeapSort\n");
  printf("[8] Imprimir vetor (sem ordenação)\n");
  printf("[9] Sair\n");
  printf("Opção: ");
  scanf("%d", &opcao);

  /* Comentar essa linha para não exibir o vetor, mostando somente o tempo de
    processamento, quantidade de trocas e quantidade de comparações. */
	imprime(N, v);

  switch(opcao)
  {
    case 1:
      printf("\n");
      clock_t c1_start = clock(); //Tempo de início
      bolha(N, v);  //Chamada da função do método de ordenação
      clock_t c1_end = clock(); //Tempo de término do processamento
      /*Função que calcula o tempo de processamento da função. O resultado é
        dado em milissegundos */
      double time1 = (double) (c1_end-c1_start) / CLOCKS_PER_SEC * 1000.0;
      printf("Tempo: %lf\n", time1);
    break;

    case 2:
      printf("\n");
      clock_t c2_start = clock();
      bolhaMelhorado(N, v);
      clock_t c2_end = clock();
      double time2 = (double) (c2_end-c2_start) / CLOCKS_PER_SEC * 1000.0;
      printf("Tempo: %lf\n", time2);
    break;

    case 3:
      printf("\n");
      clock_t c3_start = clock();
      double qtdComparacoes = 0, qtdTrocas = 0;
      quicksort(v, 0, N-1, &qtdComparacoes, &qtdTrocas);
      clock_t c3_end = clock();
      double time3 = (double) (c3_end-c3_start) / CLOCKS_PER_SEC * 1000.0;
  		printf("Trocas: %.0lf\n", qtdTrocas);
  		printf("Comparações: %.0lf\n", qtdComparacoes);
      printf("Tempo: %lf\n", time3);
    break;

    case 4:
      printf("\n");
      clock_t c4_start = clock();
      insercaoDireta(N, v);
      clock_t c4_end = clock();
      double time4 = (double) (c4_end-c4_start) / CLOCKS_PER_SEC * 1000.0;
      printf("Tempo: %lf\n", time4);
    break;

    case 5:
      printf("\n");
      clock_t c5_start = clock();
      shellSort(N, v);
      clock_t c5_end = clock();
      double time5 = (double) (c5_end-c5_start) / CLOCKS_PER_SEC * 1000.0;
      printf("Tempo: %lf\n", time5);
    break;

    case 6:
      printf("\n");
      clock_t c6_start = clock();
      selecaoDireta(N, v);
      clock_t c6_end = clock();
      double time6 = (double) (c6_end-c6_start) / CLOCKS_PER_SEC * 1000.0;
      printf("Tempo: %lf\n", time6);
    break;

    case 7:
      printf("\n");
      clock_t c7_start = clock();
      heapsort(N, v);
      clock_t c7_end = clock();
      double time7 = (double) (c7_end-c7_start) / CLOCKS_PER_SEC * 1000.0;
      printf("Tempo: %lf\n", time7);
    break;

    case 8:
      printf("\n");
      imprime(N, v);
    break;

    case 9:
      system("cls");
      printf("Saindo...\n");
    break;

    default:
      printf("Opção inválida.\n");
  }
}

/* Menu para escolha do tipo de ordenação, aleatório, crescente ou decrescente.
A função recebe a quantidade de elementos e ordena em um desses três tipos de
acordo com a escolha do usuário. */
void menuOpOrdenacao(int N)
{
  int i, op, v[N];

  system("clear");
  printf("Tipo do vetor:\n");
  printf("[1] Ordem aleatória\n");
  printf("[2] Ordem crescente\n");
  printf("[3] Ordem decrescente\n");
  printf("Opção: ");
  scanf("%d", &op);

  switch(op)
  {
  	case 1:
		  srand(time(NULL));
		  for(i=0; i<N; i++)
		  {
		    v[i] = (rand() % (N * 10)); //Função para gerar valores aleatórios
		  }
		  break;
  	case 2:
		  for(i=0; i<N; i++)
		  {
		    v[i] = i + 1;
		  }
		  break;
  	case 3:
		  for(i=0; i<N; i++)
		  {
		    v[i] = N - i;
		  }
		  break;
	}

  //Chamada do menu de escolha do método de ordenação.
  menu(N, v);
}
