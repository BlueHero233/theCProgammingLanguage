/* a) Gerar uma matriz de 3x3 com números aleatórios entre 1 e 10.
b) Somar todos os elementos da matriz.
c) Somar os elementos da diagonal principal da matriz.
d) Somar os elementos da diagonal secundária da matriz.
e) Mostrar a matriz e as somas.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrizes.h"
int main(void){
    int n=3, matriz[n][n], i, j, somaP=0, somaT=0, somaS=0;
    gerarMatrizInteiroDe1aLimite(n,n,matriz,10);
    imprimirMatrizInteiro(n,n,matriz);
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (i==j)
                somaP+=matriz[i][j];
            if (i+j==(n-1))
                somaS+=matriz[i][j];
            somaT+=matriz[i][j];
        }
    }
    printf("soma principal = %d\n", somaP);
    printf("soma secundaria = %d\n", somaS);
    printf("soma todos = %d\n", somaT);
    return 0;
}
