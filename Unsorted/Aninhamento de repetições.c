#include <stdio.h>

int main(void)
{
    int x, y;

    /*Aninhamento de repeti��es:
    trata-se do uso de um comando de repeti��o (while, for ou
    do-while) dentro do outro

    Exemplo
    repeti��o(condi��o1)
    {
        conjunto de intru��es;
        repeti��o(condi��o2)
        {
            conjunto de instru��es;
            repeti��o(condi��o...)
            {
                ...
            }
        }
    }
    */

    printf("Exemplo 1: imprime matriz quadrada com destaque a diagonal principal\n");
    x = 1;
    while(x <= 5)
    {
        y = 1;
        while(y <= 5)
        {
            if(x == y)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
            y++;
        }
        printf("\n");
        x++;
    }

    printf("\nExemplo 2: imprime matriz quadrada com destaque a diagonal principal\n");
    for(x = 1; x <= 5; x++)
    {
        for(y = 1; y <= 5; y++)
        {
            if(x == y)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }

    printf("\nExemplo 3: imprime matriz quadrada com destaque a diagonal principal\n");
    x = 1;
    do
    {
        y = 1;
        do
        {
            if(x == y)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
            y++;
        }while(y <= 5);
        printf("\n");
        x++;
    }while(x <= 5);


    return 0;
}
