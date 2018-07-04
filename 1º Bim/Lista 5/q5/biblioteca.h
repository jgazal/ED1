typedef struct no{
	int info;
	struct no *prox;
} *Lista;

Lista lista;

Lista InsereInicio(Lista lista, int i);
void InsereFim(Lista lista, int i);
int Busca(Lista lista, int n);
void Imprimir(Lista lista);
int UltimoInf(Lista lista);
int QuantidadeNos(Lista lista);
int Soma(Lista lista);
void InsereAntes(Lista lista, int i, int p);
void InsereDepois(Lista lista, int i, int p);
Lista RemoveItem(Lista lista, int i);
Lista RemoveTodos(Lista lista);
