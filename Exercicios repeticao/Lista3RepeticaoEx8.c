/*Fazer um programa para mostrar os divisores, calcular a quantidade deles e mostrar essa quantidade para
os números compreendidos entre o valor ‘x’ (informado pelo usuário) e ‘x+10’, inclusive. Validar a entrada, o
usuário deverá fornecer um número positivo entre 2 e 100. Ao final, mostrar a maior quantidade de divisores.
A seguir um exemplo da execução, utilizá-lo como modelo para o programa implementado:
*/
#include <stdio.h>
int main (void) 
{
    char opcao;
    int num, i, j;
    do
    {
        printf("Informe um numero entre 2 e 100.\n");
        scanf("%d", &num);
        if (num<2||num>100)
        {
            printf("Valor invalido\n");
        }      
    } while (num<2||num>100);
    for (i=1;i<=11;i++)
    {
        printf("%d==>", num);
        for (j=1;j<=num;j++)
        {

        }
        
    }
    return 0;
}