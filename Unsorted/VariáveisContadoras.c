#include <stdio.h>

int main(void)
{
    int i, cont=0;

    //Variáveis contadoras são aquelas que normalmente são inicializadas com valor 0
    // e incrementadas em 1 a cada iteração.
    //Tem como função realizar a contagem de ocorrências de um determinado valor (ou situação).

    for(i=0; i <= 10; i++) //i é uma variável contadora
    {
        if(i%2 == 0)
        {
            printf("%d\n", i);
            cont++; //cont é uma variável contadora
        }
    }
    printf("\nQuantidade de numeros pares: %d\n", cont);

    return 0;
}
