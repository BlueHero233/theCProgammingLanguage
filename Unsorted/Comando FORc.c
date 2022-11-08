#include <stdio.h>

int main(void)
{
    int x, y, num;

    /*O comando for:
    permite executar, repetidamente,um conjunto de
    instruções de acordo com uma condição*/

    //Forma Geral
    // for(inicialização; condição; incremento)
    {
        //  conjunto de intruções
    }

    printf("Exemplo 1: imprime numeros de 1 a 10\n");
    for(x = 1; x <= 10; x++)
    {
        printf("x = %d\n", x);
    }

    printf("\nExemplo 2: imprime x de 1 a 10 e y de 10 a 1\n");
    for(x = 1, y = 10; x <= 10 && y >= 1; x++, y--)
    {
        printf("x = %d\t y = %d\n", x, y);
    }

    printf("\nExemplo 3: solicita 10 numeros e verifica se eh par ou imapar\n");
    for(x = 1; x <= 10; x++)
    {
        printf("Informe um numero: ");
        scanf("%d",&num);

        if(num%2 == 0)
        {
            printf("O numero eh par\n");
        }
        else
        {
            printf("O numero eh impar\n");
        }
    }

    printf("\nExemplo 4: solicita 1 numero e fornece a tabuada\n");
    printf("Informe um numero: ");
    scanf("%d",&num);
    for(x = 0; x <= 10; x++)
    {
        printf("%2d * %2d = %2d\n", num, x, num * x);
    }

    return 0;
}
