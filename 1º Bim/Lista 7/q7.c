/* 7- Escreva uma função que encontre uma célula de conteúdo mínimo. Faça duas
versões: uma iterativa e uma recursiva. */

// Versão iterativa
Lista* encontra_minimo(Lista* l)
{
  Lista* p = l;
  Lista* minimo;
  while(p != NULL)
  {
    if(p->info < p->prox->info)
    {
      minimo = p;
    }
    p = p->prox;
  }
  return minimo;
}

//Resolução professora - Versão iterativa - 06/04/2018
int min(Lista* L)
{
  int menor;
  Lista *p;
  menor = L->info;
  p = L->prox;
  while(p!=NULL)
  {
    if(menor > p->info)
    {
      menor = p->info;
    }
    p = p->prox;
  }
  return menor;
}

// Versão recursiva
Lista* encontra_minimo(Lista *l)
{
  if(l->prox == NULL)
  {
 		return l;
  }
  else
  {
    if(l->info < encontra_minimo(l->prox))
    {
      return l;
    }
    else
    {
      return encontra_minimo(l->prox);
    }
  }
}

//Resolução professora - Versão recursiva - 06/04/2018
int minRec(Lista* l)
{
  if(l->prox == NULL)
  {
    return l->info;
  }
  else
  {
    if(l->info < minRec(l->prox))
    {
      return l->info;
    }
    else
    {
      return minRec(l->prox);
    }
  }
}
