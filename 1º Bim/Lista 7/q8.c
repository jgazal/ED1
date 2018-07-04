/* 8- Implemente uma função que verifique se duas listas encadeadas são iguais.
Duas listas são consideradas iguais se têm a mesma sequência de elementos. O
protótipo da função deve ser dado por:
int igual(Lista l1, Lista l2);  */

int igual(Lista l1, Lista l2)
{
  Lista* p1; //ponteiro para percorrer l1;
  Lista* p2; //ponteiro para percorrer l2;

  for(p1 = l1, p2 = l2; p1 != NULL && p2 != NULL; p1 = p1->prox, p2 = p2->prox)
  {
    if(p1->info != p2->info)
    {
      return 0;
    }
    return p1==p2;
  }
}

//Usando while
int igual(Lista l1, Lista l2)
{
  Lista* p1 = l1;
  Lista* p2 = l2;

  while(p1 != NULL && p2 != NULL)
  {
    if(p1->info != p2->info)
    {
      return 0;
    }
    p1 = p1->prox;
    p2 = p2->prox;
  }
  return p1==p2;
}

//Usando while - Versão 2
int igual(Lista l1, Lista l2)
{
  Lista* p1 = l1;
  Lista* p2 = l2;

  int aux = 1;

  while(p1 != NULL && p2 != NULL)
  {
    if(p1->info != p2->info)
    {
      return aux = 0;
    }
    p1 = p1->prox;
    p2 = p2->prox;
  }
  return aux;
}
