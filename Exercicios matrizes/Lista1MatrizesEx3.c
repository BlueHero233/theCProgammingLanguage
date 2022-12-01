/*) Gerar uma matriz 10x10 preenchida com o número 
1 e mostrar a matriz. Em seguida, preencher com 0 as
diagonais principal e secundária e mostrar a matriz*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrizes.h"
int main(void){
    int n=10, matriz[n][n], i, j, somaP=0, somaT=0, somaS=0;
    for ( i = 0; i < n; i++)
        for ( j = 0; j < n; j++)
            matriz[i][j]=1;
    putchar('\n');
    imprimirMatrizInteiro(n,n,matriz);
    for ( i = 0; i < n; i++)
        for ( j = 0; j < n; j++)
            if (i==j||i+j==n-1)
                matriz[i][j]=0;
    putchar('\n');
    imprimirMatrizInteiro(n,n,matriz);            
    return 0;
}
