/* Função do método de ordenação Bolha. A função recebe a quantidade de elementos
e o vetor, ordenando os elementos. */
void bolha(int n, int *v);
/* Função do método de ordenação Bolha Melhorado. A função recebe a quantidade
de elementos e o vetor, ordenando os elementos. */
void bolhaMelhorado(int n, int *v);
/* Função do método de ordenação QuickSort. A função recebe o vetor, elemento a
esquerda, elemento a direita, quantidade de comparações e quantidade de trocas,
ordenando os elementos. */
void quicksort(int *v, int esq, int dir, double *qtdComparacoes, double *qtdTrocas);
/* Função do método de ordenação Inserção Direta. A função recebe a quantidade
de elementos e o vetor, ordenando os elementos. */
void insercaoDireta(int	n, int *v);
/* Função do método de ordenação ShellSort. A função recebe a quantidade
de elementos e o vetor, ordenando os elementos. */
void shellSort(int n, int *v);
/* Função do método de ordenação Seleção Direta. A função recebe a quantidade
de elementos e o vetor, ordenando os elementos. */
void selecaoDireta(int n, int *v);
/* Função do método de ordenação HeapSort. A função recebe a quantidade
de elementos e o vetor, ordenando os elementos. */
void heapsort(int n, int *v);
/* Função de impressão. A função recebe a quantidade de elementos e o vetor,
ordenando os elementos. */
void imprime(int N, int *v);
/* Menu para escolha do método de ordenação, impressão dos elementos sem ordenação,
ou sair do programa. A função recebe a quantidade de elementos e o vetor, imprimindo
os elementos na ordem escolhida e o tempo de processamento da operação. */
void menu(int N, int *v);
/* Menu para escolha do tipo de ordenação, aleatório, crescente ou decrescente.
A função recebe a quantidade de elementos e ordena em um desses três tipos de
acordo com a escolha do usuário. */
void menuOpOrdenacao(int N);
