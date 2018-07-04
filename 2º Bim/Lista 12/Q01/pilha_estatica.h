#define N 1000
#define true 1
#define false 0;

typedef int boolean;

typedef struct{
	char v[N];
	int topo;
}Pilha;

void push(Pilha **p, char i);
char pop(Pilha **p);
void criarPilha(Pilha **p);
void destruirPilha(Pilha **p);
char consultarPilha(Pilha **p, int i);
boolean pilhaVazia(Pilha **p);
boolean pilhaCheia(Pilha **p);
boolean palindromo(Pilha **p);
void imprimirPilha(Pilha **p);
