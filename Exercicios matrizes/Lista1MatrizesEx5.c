/*Gerar uma matriz 3x3 com números randômicos no 
intervalo de 1 a 100 e a seguir escrever a localização
(linha e a coluna) do maior valor*/
#include <stdio.h>
#include "matrizes.h"
int main(void)
{   
    int n=3, matriz[n][n], i, j;
    gerarMatrizInteiroDe1aLimite(n,n,matriz,100);
    imprimirMatrizInteiro(n,n,matriz);
    putchar('\n');
    
    return 0;
}