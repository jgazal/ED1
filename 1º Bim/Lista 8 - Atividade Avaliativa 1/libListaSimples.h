//Struct da Lista Simplesmente Encadeada
struct lista{
  int info;
  struct lista *prox;
};
typedef struct lista Lista;

//Inicializa a Lista Simplesmente Encadeada, retornando NULL
Lista* inicializaLista();

/* Insere elementos no início da Lista Simplesmente Encadeada, recebendo como
parâmetros de entrada a lista onde serão inseridos os elementos e a informação
do novo elemento, tendo como retorno a nova lista */
Lista* insereInicio(Lista* L, int x);

/* Imprime os elementos da Lista Simplesmente Encadeada. Os valores são impressos
na ordem inversa de entrada */
void imprimeLista(Lista* L);
