/*Ler um número maior que 2 e imprimir todos os pares entre 2 e o número lido. Imprimir a soma dos pares,
o produto dos ímpares que são divisíveis por 9 e a média de todos os números do intervalo.
Exemplo:*/
#include <stdio.h>
int main(void)
{
    int i, numero, somaPares=0, produtoImpar=1;
    float media;
    do
    {
    printf("Informe um numero maior que 2:\n");
    scanf("%d", &numero);
    for (i=2; i<=numero; i++)
    {
        if (i%2==0)
        {
            printf("%d\t", i);
            somaPares=somaPares+i;
        }
        if (i%2!=0&&i%9==0)
        {
            produtoImpar=produtoImpar*i;
        }
        media = ((float)numero+2)/2;   
    }
    }while(numero<=2);
    printf("\nA soma dos pares eh igual a %d\n", somaPares);
    printf("O produto dos impares que sao divisiveis por 9 eh igual a %d\n", produtoImpar);
    printf("A media de todos os numeros do intervalo eh igual a %.2f\n", media);
}