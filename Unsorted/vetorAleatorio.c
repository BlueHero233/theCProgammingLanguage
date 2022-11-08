#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void criarVetor(int vetor[], int tamanho, int limite);
void imprimirVetor(int vetor[], int tamanho);
int main(void)
{
    int vetorA[10],vetorB[10], i;
    srand(time(NULL));
    /*for (size_t i = 0; i < 10; i++)
    {
        vetorA[i]=rand()%11;
    }
    for (size_t i = 0; i < 10; i++)
    {
        printf("vetorA[%d] = %d\n",i,vetorA[i]);
    }*/
    criarVetor(vetorA, 10, 15);
    imprimirVetor(vetorA, 10);
    printf("\n");
    criarVetor(vetorB, 5, 20);
    imprimirVetor(vetorB, 5);
    return 0;
}
void criarVetor(int vetor[], int tamanho, int limite)
{
    int i;
    srand(time(NULL));
    for (size_t i = 0; i < tamanho; i++)
    {
        vetor[i]=rand()%(limite+1);
    }
}
void imprimirVetor(int vetor[], int tamanho)
{
    int i;
    for (size_t i = 0; i < tamanho; i++)
    {
        printf("vetor[%d] = %d\n",i,vetor[i]);
    }
}