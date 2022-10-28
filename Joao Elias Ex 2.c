/*Escreva um progama que solicite, um numero inteiro positivo e
imprima os valores conforme o padrao apresentado nos exemplos a seguir:
Exemplo 1:
Informe um numero inteiro positivo: 2
1 3
2 4
Exemplo 2:
Informe um numero inteiro positivo: 3
1 4 7
2 5 8
3 6 9
Exemplo 3:
Informe um numero inteiro positivo: 4
1 5  9 13
2 6 10 14
3 7 11 15
4 8 12 16
*/
#include <stdio.h>
int main(void)
{
    int num=0, i, j, aritimetica;
    // coluna \n linha \t
    do
    {
        printf("Informe um numero inteiro positivo:\n");
        scanf("%d", &num);
        if(num<=0)
        {
            printf("Numero Invalido!\n");
        }
    }
    while(num<=0);
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num;j++)
        {
            aritimetica=(i+num*(j-1));  // WTFFFFF????
            printf("%d\t",aritimetica);
        }
        printf("\n");
    }
    return 0;
}
