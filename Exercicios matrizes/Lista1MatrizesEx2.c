/*) Gerar uma matriz 5x5 com números randômicos, 
no intervalo de 1 a 5. Em seguida criar dois vetores que
contenham, respectivamente, as somas das linhas e das 
colunas da matriz. Mostrar os vetores criados.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrizes.h"
int main(void){
    int n=5, matriz[n][n], i, j, somaP=0, somaT=0, somaS=0, linha[n], coluna[n];
    gerarMatrizInteiroDe1aLimite(n,n,matriz,10);
    imprimirMatrizInteiro(n,n,matriz);
    for ( i = 0; i < n; i++)
    {
        linha[i]=0;
        coluna[i]=0;
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            linha[i]+=matriz[i][j];
            coluna[j]+=matriz[i][j];
        }  
    }
    putchar('\n');
    imprimirVetorInteiro(linha, n);
    putchar('\n');
    imprimirVetorInteiro(coluna, n);
    return 0;
}
