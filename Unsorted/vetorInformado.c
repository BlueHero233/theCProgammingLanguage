#include <stdio.h>
void imprimirVetor(int vetor[], int tamanho);
int main(void)
{
    int vetorA[10], vetorB[10], i, j ,k;
    for (size_t i = 0; i < 10; i++)
    {
        printf("Informe um valor para a posicao %d do vetor\n", i);
        scanf("%d", &vetorA[i]);
    }
    /*for (size_t i = 0; i < 10; i++)
    {
        printf("vetorA[%d] = %d\n",i,vetorA[i]);
    }*/
    imprimirVetor(vetorA, 10);
    printf("\n");
    for (size_t i = 0; i < 10; i++)
    {
        vetorB[i]=vetorA[i]*i;
    }
    /*for (size_t i = 0; i < 10; i++)
    {
        printf("vetorB[%d] = %d\n",i,vetorB[i]);
    }*/
    imprimirVetor(vetorB, 10);
    return 0;
}
void imprimirVetor(int vetor[], int tamanho)
{
    int i;
    for (size_t i = 0; i < tamanho; i++)
    {
        printf("vetor[%d] = %d\n",i,vetor[i]);
    }
}