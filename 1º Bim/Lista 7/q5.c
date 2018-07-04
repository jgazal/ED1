/* 5- Critique a função abaixo. Ao receber o endereço inicial de uma lista
encadeada e um inteiro x, ela promete devolver o endereço de uma célula com
conteúdo x, ela promete devolver o endereço e uma célula om conteúdo x. Se tal
célula não existe, promete devolver NULL. */

celula *busca(int x, celula *ini){
  int achou;
  celula *p;
  achou = 0;
  p = ini->prox; //Coloca o próximo elemento no início antes de percorrer a lista
  while(p!=NULL && !achou){
    if(p->conteudo == x) achou = 1;
    p = p->prox; //Deveria estar em um else
  }
  if(achou) return p;
  else return NULL;
}
