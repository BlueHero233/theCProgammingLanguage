#include "vetores.h"
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int vetorA[20], i, j, contDiv;
    printf("==== VETOR ORIGINAL ====\n");
    gerarVetorInteiroComFaixa(vetorA, 20, 5, 20);
    mostrarVetorInteiro(vetorA, 20);
    printf("\n==== VETOR ORDENADO ====\n");
    ordenarVetor(vetorA, 20);
    mostrarVetorInteiro(vetorA, 20);
    printf("\n==== DIVISORES ====\n");
    for (i = 0; i < 20; i++)
    {
        printf("%d => ", vetorA[i]);
        contDiv=0;
        for (j = 1; j < 20; j++)
        {
            if (vetorA[i] % j == 0){
                printf("%d ", j);
                contDiv++;
            }
        }
        printf("- %d divisores\n", contDiv);
    }
    return 0;   
}