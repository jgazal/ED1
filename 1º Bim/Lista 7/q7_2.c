/*
 * Escreva uma fun��o que encontre uma c�lula de conte�do m�nimo. Fa�a duas vers�es:
 * uma interativa e uma recursiva.
 */

 Lista* minimoInterativo(Lista *l){
 	Lista *min = l;
 	Lista *p = l->prox;
 	while (p != NULL){
 		if (p->info < min->info){
 			min = p;
		 }
		 p = p->prox;
 	}
 	return min;
 }
 
 Lista* minimoRecursivo(Lista *l){
 	if (l->prox == NULL){
 		return l;
	 }else{
	 	if (l->info < minimoRecursivo(l->prox)){
	 		return l;
		 }else{
		 	return minimoRecursivo(l->prox);
		 }
	 }
 }
