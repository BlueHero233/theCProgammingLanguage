#include <stdio.h>

int main(void)
{
    int x;

    /*O comando if permite executar ou não um conjunto de
    instruções de acordo com uma condição*/

    //Forma Geral
    if(condição)
    {
        conjunto de intruções
    }

    //Exemplo 1
    printf("Informe um valor inteiro: ");
    scanf("%d", &x);

    if(x > 0)
    {
        printf("O valor eh positivo\n");
    }

    //Exemplo 2
    printf("Informe um valor inteiro: ");
    scanf("%d", &x);

    if(x % 2 == 0 || x < 0)
    {
        printf("O valor eh par ou negativo\n");
    }

    return 0;
}
