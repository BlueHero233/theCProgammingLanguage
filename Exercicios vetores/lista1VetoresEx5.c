/* Gerar aleatoriamente valores 0 ou 1 um vetor com 100 
elementos. Mostrar o vetor. Em seguida contar quantos
0s sucessivos o vetor contem, armazenar essa quantidade 
em outro vetor e mostra-lo. Qual seria o tamanho
mínimo e maximo do vetor que armazena as quantidades? 
Cria-lo para o tamanho maximo possivel.
*/
#include "vetores.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int i, j=0, vetorA[100], vetorB[50], contZero=0;
    gerarVetorInteiroDe0aLimite(vetorA, 100, 1);
    mostrarVetorInteiro(vetorA, 100);
    putchar('\n');
    for (i = 0; i < 100; i++)
    {
        if (vetorA[i]==0)
            contZero++;
        else if (contZero != 0)
        {
            vetorB[j] = contZero;
            contZero = 0;
            j++;
        }
    }
    mostrarVetorInteiro(vetorB, j);
    return 0;
}