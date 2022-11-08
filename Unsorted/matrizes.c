#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int lin=10, col=5, matriz[lin][col], i, j;

    srand(time(NULL));

    //Gravar elementos na matriz
    for(i=0; i<lin; i++)
    {
        for(j=0; j<col; j++)
        {
           matriz[i][j] = rand() % 11;
        }
    }

    //Imprime elementos da matriz
    printf("\n== MATRIZ GERADA ==\n");
    for(i=0; i<lin; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
