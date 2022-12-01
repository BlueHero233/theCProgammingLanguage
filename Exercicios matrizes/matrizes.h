void gerarMatrizInteiroDe1aLimite(int linha, int coluna, int matriz[linha][coluna], int limite){
    int i, j;
    srand(time(NULL));
    for (i=0; i<linha; i++)
        for (j=0; j<coluna; j++)
            matriz[i][j]= rand() % limite+1;
}
void imprimirMatrizInteiro(int linha, int coluna, int matriz[linha][coluna]){
    int i, j;
    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
            printf("%3d", matriz[i][j]);
        printf("\n");
    }
}
void imprimirVetorInteiro(int vetor[], int tamanho){
    int i;
    for(i=0; i<tamanho; i++)
        printf("%d ", vetor[i]);
}
