#include <stdio.h>

int main(void)
{
    int x;

    /*O comando if permite executar um conjunto de
    instruções quando a condição for verdadeira.
    O comando else permite executar um conjunto de instruções
    quando a condição for falsa. */

    //Forma Geral
    if(condição)
    {
        Primeiro conjunto de intruções
    }
    else
    {
        Segundo conjunto de instruções
    }

    //Exemplo 1
    printf("Informe um valor inteiro: ");
    scanf("%d", &x);

    if(x < 0)
    {
        printf("O valor eh negativo\n");
    }
    else
    {
        printf("O valor eh positivo\n");
    }

    return 0;
}
