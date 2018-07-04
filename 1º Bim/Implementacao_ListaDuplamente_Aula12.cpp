#include<stdio.h>
#include<stdlib.h>

struct celula{
	int info;
	struct celula *ant, *prox;
};
typedef struct celula ListaD;

ListaD* insere(ListaD* l, int v){
  ListaD* novo = (ListaD*) malloc(sizeof(ListaD));
  novo->info = v;
  novo->prox = l;//l é o primeiro no da lista
  novo->ant = NULL;//função insere no inicio
  //verifica se lista não está vazia
  if(l != NULL){
  	l->ant = novo;//modifica anterior do 1º
  }
  return novo;
}
void mostra(ListaD* l){
	ListaD* p;
	printf("   ant    info     prox\n");
	for(p=l; p !=NULL; p=p->prox)
	printf(" %p     %i     %p\n",p->ant,p->info,p->prox);
}
ListaD* insereFim(ListaD* l, int v){
	ListaD *p, *novo;
	novo = (ListaD*) malloc(sizeof(ListaD));
    novo->info = v;
    novo->prox = NULL;//novo será ultimo
    if(l==NULL){//se lista vazia
    	novo->ant = NULL;
    	return novo;
    }
    else{
    	p = l;
    	while(p->prox != NULL)
    	  p = p->prox;

     p->prox = novo;
 	 novo->ant = p;      
     return l;
    }
}

/* função busca: busca um elemento na lista */
ListaD* busca (ListaD* l, int v)
{
  ListaD* p;
  for (p=l; p!=NULL; p=p->prox)
    if (p->info == v)
     return p;
  return NULL; /* não achou o elemento */
}

/* função retira: retira elemento da lista */
ListaD* retira (ListaD* l, int v) {
  ListaD* p = busca(l,v);
  if (p == NULL)
     return l; /* não achou o elemento: retorna lista inalterada */
  /* retira elemento do encadeamento */
  if (l == p)
    l = p->prox;
  else
    p->ant->prox = p->prox;
  if (p->prox != NULL)
     p->prox->ant = p->ant;
  p->prox = NULL;
  p->ant = NULL;
  free(p);
  return l;
}

int main(){
	ListaD* inicio;
	inicio = NULL;
	inicio = insere(inicio,10);
    inicio = insere(inicio,6);	
    inicio = insereFim(inicio,5);
    mostra(inicio);
    inicio = retira(inicio,5);
    printf("\n\nLista apos remocao: \n");
    mostra(inicio);
    system("Pause");
    return 0;
}
