//Struct da Lista Duplamente Encadeada
struct listaD{
  int info;
  struct listaD *ant;
  struct listaD *prox;
};
typedef struct listaD ListaD;

//Inicializa a Lista Duplamente Encadeada, retornando NULL
ListaD* inicializaListaD();

/* Função que recebe duas lista simplesmente encadeadas não ordenadas (ListaPares
e ListaImpares) e retorna uma lista duplamente encadeada circular contendo todos
os elementas das listas recebidas de forma ordenada */
ListaD* concatena(Lista* ListaPares, Lista* ListaImpares);

/* Função que recebe os elementos da lista concatenada e os ordena em ordem
crescente, retornando a Lista Duplamente Encadeada com seus elementos ordenados */
ListaD* insereOrdenado(ListaD* L, int v);

/* Imprime os elementos da Lista Duplamente Encadeada. Os valores são impressos
ordenados na ordem Crescente e Decrescente */
void imprimeListaD(ListaD* L);
