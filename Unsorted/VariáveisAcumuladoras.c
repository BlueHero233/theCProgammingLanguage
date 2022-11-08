#include <stdio.h>

int main(void)
{
    int i, soma=0, produto=1;

    //Vari�veis acumuladoras�s�o utilizadas em dois tipos de situa��es:
    //- Para a realiza��o de somat�rios (normalmente iniciadas em 0).
    //- Para a realiza��o de produt�rios (normalmente iniciadas em 1).

    printf("=== Exemplo de Somatorio ===\n");
    for(i=0; i <= 10; i++)
    {
        if (i%2 == 0)
        {
            printf("%d\n", i);
            soma = soma + i; //soma � uma vari�vel acumuladora
        }
    }
    printf("A soma dos numeros pares eh: %d\n", soma);

    printf("\n=== Exemplo de Produtorio ===\n");
    for(i=1; i <= 10; i++)
    {
        if (i%2 == 0)
        {
            printf("%d\n", i);
            produto = produto * i;
        }
    }
    printf("O produto dos numeros pares eh: %d\n", produto);

    return 0;
}
