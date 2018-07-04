/* Dado o seguinte programa escrito em C:

Qual é a resposta que será impressa na tela:
Escolha uma:
a. Valor: 7 Valor : 8
b. Valor: 7 Valor: 7
c. Valor: 8 Valor: 9
d. Valor: 7 Valor: 9
e. Valor: 9 Valor: 9 */

int main()
{
  int n[3] = {7, 8, 9};
  int *p;

  p = &n[0];
  p++;

  printf("Valor: %d ", *p);

  (*p)++;

  printf("Valor: %d\n", *p);

  return 0;
 }
