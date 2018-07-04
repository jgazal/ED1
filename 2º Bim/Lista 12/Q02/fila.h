#define true 1
#define false 0;

typedef int boolean;

typedef struct NoLista{
	char dado;
	struct NoLista *prox;
} Lista;

typedef struct{
	Lista *inicio;
	Lista *fim;
} Fila;

void enfileirar(Fila **f, char i);
char desenfileirar(Fila **f);
void criarFila(Fila **f);
void destruirFila(Fila **f);
boolean filaVazia(Fila **f);
void imprimirFila(Fila **f);
