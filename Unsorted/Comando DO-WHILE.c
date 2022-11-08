#include <stdio.h>

int main(void)
{
    int x, y, num;

    /*O comando do while:
    permite executar, repetidamente e AO MENOS UMA VEZ,um conjunto de
    instruções de acordo com uma condição*/

    //Forma Geral
    //do
    {
//        conjunto de intruções
    }//while(condição);

    printf("Exemplo 1: imprime numeros de 1 a 10\n");
    x = 1;
    do
    {
        printf("x = %d\n", x);
        x++;
    }while(x <= 10);

    printf("\nExemplo 2: imprime x de 1 a 10 e y de 10 a 1\n");
    x = 1;
    y = 10;
    do
    {
        printf("x = %d\t y = %d\n", x, y);
        x++;
        y--;
    }while(x <= 10 && y >= 1);

    printf("\nExemplo 3: solicita 10 numeros e verifica se eh par ou imapar\n");
    x = 1;
    do
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
        x++;
    }while(x <= 10);

    printf("\nExemplo 4: solicita 1 numero e fornece a tabuada\n");
    printf("Informe um numero: ");
    scanf("%d",&num);
    x = 0;
    do
    {
        printf("%2d * %2d = %2d\n", num, x, num * x);
        x++;
    }while(x <= 10);

    printf("\nExemplo 5: validar uma entrada para ser um numero positivo\n");
    do
    {
        printf("Informe um numero: ");
        scanf("%d",&num);
    }while(num < 0);


    //Atenção: Cuidado para não gerar loop infinito

    return 0;
}
