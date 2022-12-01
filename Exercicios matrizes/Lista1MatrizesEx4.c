/* Gerar uma matriz 10x2 com valores de 1 a 6. A primeira 
coluna da matriz se refere a base e a segunda
coluna ao expoente. Criar uma função que calcule a potência, 
gerar um vetor que armazena o resultado da
potência obtida a partir dos valores da matriz.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrizes.h"
int main(void){
    int n=10, m=2, matriz[n][m], i, j, base[10], exp[10], resultado[10];
    gerarMatrizInteiroDe1aLimite(n,m,matriz,6);
    imprimirMatrizInteiro(n,m,matriz);

    for (j = 0; j < n; j++)
    {
        
    }
}