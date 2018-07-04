/* Desenvolva um programa que receba números inteiros e armazene os pares em uma
lista simplesmente encadeada e não ordenada e os ímpares em uma segunda lista
simplesmente encadeada e não ordenada.
Posteriormente, o programa deve montar uma terceira lista, duplamente encadeada
e ordenada de forma crescente, com os números das duas listas anteriores. Para
finalizar, o programa deve mostrar os números da terceira lista das seguintes
formas:
    a. Crescente.
    b. Decrescente.
Você deverá criar o TAD para manipulação da Estrutura de Dados, ou seja, definir
o tipo que será utilizado e implementar as operações para manipulação do tipo c
onstruído (funções). Faça a documentação das funções.*/

/*
Para compilar no terminal do Linux:
gcc -c funcoes.c
gcc -o principal principal.c funcoes.o
./principal
*/

#include<stdio.h>
#include<stdlib.h>
#include "libListaSimples.h"
#include "libListaDupla.h"

//Função principal
int main()
{
  int valor; // Valores digitados pelo usuário

  //Ponteiros para as Listas
  Lista *ListaPares;   //Ponteiro para Lista Simplesmente Encadeada ListaPares
  Lista *ListaImpares; //Ponteiro para Lista Simplesmente Encadeada ListaImpares
  ListaD *ListaDupla;  //Ponteiro para Lista Duplamente Encadeada ListaDupla

  //Inicializa as Listas
  ListaPares = inicializaLista();   //Inicializa ListaPares
  ListaImpares = inicializaLista(); //Inicializa ListaImpares
  ListaDupla = inicializaListaD();  //Inicialziada ListaDupla

  //Digita os elementos para as listas
  printf("Valores [Para parar digite 0]: \n");
  do{
    scanf("%d", &valor);
    if(valor%2 == 0 && valor!=0) //Se o elemento for par, insere na lista ListaPares
    {
      ListaPares = insereInicio(ListaPares, valor);
    }
    else if(valor!=0) //Se for ímpar, insere o elemento na lista ListaImpares
    {
      ListaImpares = insereInicio(ListaImpares, valor);
    }
  }while(valor!=0);

  //Imprime a lista de elementos pares
  printf("\n");
  printf("Lista de elementos Pares: ");
  imprimeLista(ListaPares);
  printf("\n");

  //Imprime a lista de elementos Ímpares
  printf("Lista de elementos Ímpares: ");
  imprimeLista(ListaImpares);
  printf("\n\n");

  //Concatena ListaPares e ListaImpares e insere os elementos em ListaDupla
  printf("Lista Duplamente Encadeada: \n");
  ListaDupla = concatena(ListaPares, ListaImpares);

  //Imprime os elementos da Lista Duplamente Encadeada ListaDupla
  imprimeListaD(ListaDupla);
  printf("\n");

  return 0;
}
