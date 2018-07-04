/* 9- Escreva uma função recursiva com o mesmo objetivo do exercício 8.*/

int igual(Lista* l1, Lista*l2)
{
  if(l1==NULL && l2==NULL)
  {
    return 1;
  }
  else if(l1==NULL || l2==NULL)
  {
    return 0;
  }
  else
  {
    return l1->info==l2->info && igual(l1->prox, l2->prox);
  }
}
