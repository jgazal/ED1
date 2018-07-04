/* 6- Implemente uma função para verificar se uma lista linear encadeada está
ordenada, utilizando a estrutura definida abaixo:
struct celula{
  int info;
  struct celula *prox;
};
typedef struct celula Lista;
*/

Lista* verifica_ordenada(Lista* l)
{
  Lista* p = l;
  int ordenada = 1;
  while(p != NULL && ordenada)
  {
    if(p->info < p->prox->info)
    {
      return 0;
    }
    p = p->prox;
  }
  return ordenada;
}

//Resolução professora - 06/04/2018
int ordenacao(lista* l)
{
  int flag = 1;
  lista *p, *q;
  
  p = l;
  q = l->prox;

  while(q!=NULL)
  {
    if(p->info > q->info)
    {
      flag = 0;
      break;
    }
    p = p->prox;
    q = q->prox;
  }
  return flag;
}
