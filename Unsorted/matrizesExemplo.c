#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrizes.h"

int main(void)
{
    int lin, col, limite, i, j;

    do
    {
        printf("Informe a quantidade de linhas da matriz: ");
        scanf("%d", &lin);

        if(lin <= 0)
        {
            printf("Valor invalido\n");
        }
    }while(lin <= 0);

    do
    {
        printf("Informe a quantidade de colunas da matriz: ");
        scanf("%d", &col);

        if(col <= 0)
        {
            printf("Valor invalido\n");
        }
    }while(col <= 0);

    do
    {
        printf("Informe o limite para sortear os elementos da matriz: ");
        scanf("%d", &limite);

        if(limite <= 0)
        {
            printf("Valor invalido\n");
        }
    }while(limite <= 0);

    int matriz1[lin][col], matriz2[lin][col];

    gerarMatrizInteiroDe1aLimite(lin, col, matriz1, limite);
    printf("\n== MATRIZ GERADA ==\n");
    mostrarMatrizInteiro(lin, col, matriz1);

    //Percorre e matriz
    for(i=0; i<lin; i++)
    {
        for(j=0; j<col; j++)
        {
            matriz2[i][j] = matriz1[i][j] * matriz1[i][j];
        }
    }

    //Imprime matriz2
    printf("\n== MATRIZ AO QUADRADO ==\n");
    mostrarMatrizInteiro(lin, col, matriz2);

    return 0;
}
