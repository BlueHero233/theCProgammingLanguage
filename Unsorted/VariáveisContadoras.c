#include <stdio.h>

int main(void)
{
    int i, cont=0;

    //Vari�veis contadoras�s�o aquelas que normalmente s�o inicializadas com valor 0
    // e incrementadas em 1 a cada itera��o.
    //Tem como fun��o realizar a contagem de ocorr�ncias de um determinado valor (ou situa��o).

    for(i=0; i <= 10; i++) //i � uma vari�vel contadora
    {
        if(i%2 == 0)
        {
            printf("%d\n", i);
            cont++; //cont � uma vari�vel contadora
        }
    }
    printf("\nQuantidade de numeros pares: %d\n", cont);

    return 0;
}
